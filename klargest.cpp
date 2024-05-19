#include <vector>
#include <queue>
#include <stdexcept> // for invalid_argument
#include <iostream>

using namespace std;

int kth_largest(vector<int> values, int k) {
  // Validate input (k cannot be greater than the number of elements)
  if (k <= 0 || k > values.size()) {
    throw invalid_argument("Invalid k value. k must be between 1 and the size of the vector.");
  }

  // Use a min-heap (priority queue) to store the k largest elements seen so far
  priority_queue<int, vector<int>, greater<int>> min_heap;

  // Push the first k elements onto the min-heap
  for (int i = 0; i < k; ++i) {
    min_heap.push(values[i]);
  }

  // Process remaining elements
  for (int i = k; i < values.size(); ++i) {
    // If the current element is larger than the smallest element in the min-heap
    if (values[i] > min_heap.top()) {
      // Pop the smallest element (largest in a min-heap)
      min_heap.pop();
      // Push the current element onto the min-heap
      min_heap.push(values[i]);
    }
  }

  // The kth largest element is now at the root of the min-heap
  return min_heap.top();
}

int main() {
  vector<int> test_data = {3, 2, 1, 5, 6, 4};
  int k = 3;

  try {
    int result = kth_largest(test_data, k);
    cout << "The " << k << "th largest element is: " << result << endl;
  } catch (const invalid_argument& e) {
    cerr << "Error: " << e.what() << endl;
  }

  return 0;
}
