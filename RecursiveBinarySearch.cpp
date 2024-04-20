#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::binarySearch(const std::vector<int>& arr, int low, int high, int target) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return true;
        else if (arr[mid] < target)
            return binarySearch(arr, mid + 1, high, target);
        else
            return binarySearch(arr, low, mid - 1, target);
    }
    return false;
}

bool RecursiveBinarySearch::search(const std::vector<int>& arr, int target) {
    return binarySearch(arr, 0, arr.size() - 1, target);
}
