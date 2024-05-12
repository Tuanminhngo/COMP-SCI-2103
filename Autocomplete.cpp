#include "Autocomplete.h"
#include <unordered_map>

class Autocomplete::TrieNode {
public:
    std::unordered_map<char, TrieNode*> children;
    bool isEndOfWord;

    TrieNode() : isEndOfWord(false) {}
};

Autocomplete::Autocomplete() {
    root = new TrieNode();
}

Autocomplete::~Autocomplete() {
    // Implement destructor to avoid memory leaks
}

void Autocomplete::insert(std::string word) {
    TrieNode* current = root;
    for (char c : word) {
        if (!current->children[c]) {
            current->children[c] = new TrieNode();
        }
        current = current->children[c];
    }
    current->isEndOfWord = true;
}

void Autocomplete::getSuggestionsHelper(TrieNode* node, std::string prefix, std::vector<std::string>& result) {
    if (node == nullptr) return;

    if (node->isEndOfWord) {
        result.push_back(prefix);
    }

    for (auto& pair : node->children) {
        getSuggestionsHelper(pair.second, prefix + pair.first, result);
    }
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {
    std::vector<std::string> result;
    TrieNode* current = root;
    for (char c : partialWord) {
        if (!current->children[c]) {
            return result;
        }
        current = current->children[c];
    }
    getSuggestionsHelper(current, partialWord, result);
    return result;
}
