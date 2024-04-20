#include <iostream>
#include <vector>
#include "QuickSort.h" // Include the QuickSort class (from QuickSort.h)

using namespace std;

int main() {
    // Read input list of integers
    vector<int> inputList;
    int num;
    while (cin >> num) {
        inputList.push_back(num);
    }

    // Sort the list using Quick Sort
    QuickSort quickSort;
    vector<int> sortedList = quickSort.sort(inputList);

    // Perform binary search to check if 1 belongs to the list
    bool found = false;
    int low = 0, high = sortedList.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (sortedList[mid] == 1) {
            found = true;
            break;
        } else if (sortedList[mid] < 1) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Print the result
    cout << (found ? "true" : "false") << " ";
    for (int num : sortedList) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
