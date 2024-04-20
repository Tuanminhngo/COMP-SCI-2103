#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>

class RecursiveBinarySearch {
public:
    bool search(const std::vector<int>& arr, int target);
private:
    bool binarySearch(const std::vector<int>& arr, int low, int high, int target);
};

#endif // RECURSIVEBINARYSEARCH_H
