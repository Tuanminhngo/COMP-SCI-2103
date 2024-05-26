#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    if (documentsById.find(id) == documentsById.end() && documentIdByName.find(name) == documentIdByName.end()) {
        Document newDoc(name, id, license_limit);
        documentsById[id] = newDoc;
        documentIdByName[name] = id;
    }
}

void DocumentManager::addPatron(int patronID) {
    patrons.insert(patronID);
}

int DocumentManager::search(std::string name) {
    if (documentIdByName.find(name) != documentIdByName.end()) {
        return documentIdByName[name];
    }
    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    if (patrons.find(patronID) == patrons.end() || documentsById.find(docid) == documentsById.end()) {
        return false;
    }
    
    Document& doc = documentsById[docid];
    if (doc.borrowed_count < doc.license_limit) {
        doc.borrowed_count++;
        borrowedDocumentsByPatron[patronID].insert(docid);
        return true;
    }
    return false;
}

void DocumentManager::returnDocument(int docid, int patronID) {
    if (borrowedDocumentsByPatron.find(patronID) != borrowedDocumentsByPatron.end() &&
        borrowedDocumentsByPatron[patronID].find(docid) != borrowedDocumentsByPatron[patronID].end()) {
        
        borrowedDocumentsByPatron[patronID].erase(docid);
        documentsById[docid].borrowed_count--;
    }
}
