#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <unordered_map>
#include <unordered_set>
#include <string>
#include <utility>

class DocumentManager {
private:
    std::unordered_map<std::string, std::pair<int, int>> documentsByName; // {name -> (id, license_limit)}
    std::unordered_map<int, int> documentBorrowCount; // {docid -> current_borrowed_count}
    std::unordered_set<int> patrons; // {patronID}
    std::unordered_map<int, std::unordered_set<int>> borrowedDocuments; // {docid -> {patronIDs}}

public:
    void addDocument(std::string name, int id, int license_limit);
    void addPatron(int patronID);
    int search(std::string name);
    bool borrowDocument(int docid, int patronID);
    void returnDocument(int docid, int patronID);
};

#endif // DOCUMENTMANAGER_H
