#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <vector>
#include <string>

class Autocomplete {
public:
    void insert(std::string word);
    std::vector<std::string> getSuggestions(std::string partialWord);

private:
    class TrieNode;
    TrieNode* root;
    void getSuggestionsHelper(TrieNode* node, std::string prefix, std::vector<std::string>& result);

public:
    Autocomplete();
    ~Autocomplete();
};

#endif // AUTOCOMPLETE_H
