#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <string>

class PrefixMatcher {
private:
    struct TrieNode;

    TrieNode* root;

public:
    PrefixMatcher();
    ~PrefixMatcher();
    void insert(std::string address, int routerNumber);
    int selectRouter(std::string networkAddress);
};

#endif // PREFIXMATCHER_H
