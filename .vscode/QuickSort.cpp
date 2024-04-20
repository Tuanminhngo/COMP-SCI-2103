#include "QuickSort.h"

int QuickSort::partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[low + 2]; // Always choose the third value as the pivot
    int i = low - 1;

    for (int j = low; j <= high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[low + 2]);
    return i + 1;
}

void QuickSort::quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

std::vector<int> QuickSort::sort(std::vector<int> list) {
    quickSort(list, 0, list.size() - 1);
    return list;
}
