#include "PrefixMatcher.h"
#include <unordered_map>

struct PrefixMatcher::TrieNode {
    std::unordered_map<char, TrieNode*> children;
    int routerNumber;
    TrieNode() : routerNumber(-1) {}
};

PrefixMatcher::PrefixMatcher() : root(new TrieNode()) {}

PrefixMatcher::~PrefixMatcher() {
    // Implement destructor to avoid memory leaks
}

void PrefixMatcher::insert(std::string address, int routerNumber) {
    TrieNode* current = root;
    for (char c : address) {
        if (!current->children[c]) {
            current->children[c] = new TrieNode();
        }
        current = current->children[c];
    }
    current->routerNumber = routerNumber;
}

int PrefixMatcher::selectRouter(std::string networkAddress) {
    TrieNode* current = root;
    int result = -1;
    for (char c : networkAddress) {
        if (!current->children[c]) {
            break;
        }
        current = current->children[c];
        if (current->routerNumber != -1) {
            result = current->routerNumber;
        }
    }
    return result;
}
