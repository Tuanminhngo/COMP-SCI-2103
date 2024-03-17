// #include "Truckloads.h"
// #include <stdexcept> // for exception handling

// int Truckloads::numTrucks(int numCrates, int loadSize) {
//   // Validate input (loadSize cannot be greater than numCrates)
//   if (loadSize > numCrates) {
//     throw std::invalid_argument("Load size cannot be greater than the number of crates.");
//   }

//   // Base case: No crates or load size fits all crates
//   if (numCrates == 0 || loadSize >= numCrates) {
//     return 1;
//   }

//   // Recursive case: Divide crates in half (rounded down for odd numbers)
//   int halfCrates = numCrates / 2;

//   // Calculate trucks for each half (potentially one more for the uneven half)
//   int trucksForHalf = numTrucks(halfCrates, loadSize);
//   int trucksForRemaining = numTrucks(numCrates - halfCrates, loadSize);

//   // Return the total number of trucks (for both halves)
//   return trucksForHalf + trucksForRemaining;
// }


#include "Truckloads.h"
#include <stdexcept>

int Truckloads::numTrucks(int numCrates, int loadSize) {
  // Handle invalid input (loadSize cannot be greater than numCrates)
  if (loadSize > numCrates) {
    throw std::invalid_argument("Load size cannot be greater than the number of crates.");
  }

  // Base case: No crates or load size fits all crates
  if (numCrates == 0 || loadSize >= numCrates) {
    return 1;
  }

  // Calculate the maximum number of crates that can be combined from both halves
  int maxCombined = std::min(numCrates - (numCrates / 2), loadSize);

  // Recursive calls for both halves (potentially adjusted based on maxCombined)
  int trucksForFirstHalf = numTrucks(std::max(0, numCrates / 2 - maxCombined), loadSize);
  int trucksForSecondHalf = numTrucks(std::max(0, numCrates - numCrates / 2 - maxCombined), loadSize);

  // Calculate total trucks needed (considering combined crates)
  return trucksForFirstHalf + trucksForSecondHalf + (maxCombined / loadSize);
}
