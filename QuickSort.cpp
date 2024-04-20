// QuickSort.cpp

#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list) {
    quickSortUtil(list, 0, list.size() - 1);
    return list;
}

int QuickSort::partition(std::vector<int>& list, int low, int high) {
    int pivot = list[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (list[j] < pivot) {
            i++;
            std::swap(list[i], list[j]);
        }
    }
    std::swap(list[i + 1], list[high]);
    return i + 1;
}

void QuickSort::quickSortUtil(std::vector<int>& list, int low, int high) {
    if (low < high) {
        int pi = partition(list, low, high);
        quickSortUtil(list, low, pi - 1);
        quickSortUtil(list, pi + 1, high);
    }
}

