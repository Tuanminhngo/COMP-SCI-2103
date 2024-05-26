#include "DocumentManager.h"
#include <iostream>

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    documentsByName[name] = std::make_pair(id, license_limit);
    documentBorrowCount[id] = 0;
}

void DocumentManager::addPatron(int patronID) {
    patrons.insert(patronID);
}

int DocumentManager::search(std::string name) {
    if (documentsByName.find(name) != documentsByName.end()) {
        return documentsByName[name].first;
    }
    return 0; // name not found
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    if (patrons.find(patronID) == patrons.end()) {
        return false; // invalid patronID
    }
    if (documentBorrowCount.find(docid) == documentBorrowCount.end()) {
        return false; // invalid docid
    }
    int currentBorrowed = documentBorrowCount[docid];
    int licenseLimit = -1;
    for (const auto &doc : documentsByName) {
        if (doc.second.first == docid) {
            licenseLimit = doc.second.second;
            break;
        }
    }
    if (licenseLimit == -1 || currentBorrowed >= licenseLimit) {
        return false; // cannot borrow, reached license limit or invalid docid
    }
    documentBorrowCount[docid]++;
    borrowedDocuments[docid].insert(patronID);
    return true;
}

void DocumentManager::returnDocument(int docid, int patronID) {
    if (borrowedDocuments[docid].find(patronID) != borrowedDocuments[docid].end()) {
        borrowedDocuments[docid].erase(patronID);
        documentBorrowCount[docid]--;
    }
}
