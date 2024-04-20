#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>

class QuickSort {
public:
    std::vector<int> sort(std::vector<int> list);
private:
    int partition(std::vector<int>& arr, int low, int high);
    void quickSort(std::vector<int>& arr, int low, int high);
};

#endif // QUICKSORT_H
