#ifndef DOCUMENT_MANAGER_H
#define DOCUMENT_MANAGER_H

#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

class Document {
public:
    std::string name;
    int id;
    int license_limit;
    int borrowed_count;

    Document(std::string name, int id, int license_limit)
        : name(name), id(id), license_limit(license_limit), borrowed_count(0) {}
};

class DocumentManager {
private:
    std::unordered_map<int, Document> documentsById;
    std::unordered_map<std::string, int> documentIdByName;
    std::unordered_set<int> patrons;
    std::unordered_map<int, std::unordered_set<int>> borrowedDocumentsByPatron;

public:
    void addDocument(std::string name, int id, int license_limit);
    void addPatron(int patronID);
    int search(std::string name);
    bool borrowDocument(int docid, int patronID);
    void returnDocument(int docid, int patronID);
};

#endif // DOCUMENT_MANAGER_H
