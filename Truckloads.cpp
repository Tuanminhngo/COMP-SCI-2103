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

// Truckloads.cpp

#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1; // If the number of crates fits in one truck, return 1
    } else {
        // Otherwise, recursively divide the pile into two smaller piles
        int leftPile = numCrates / 2;
        int rightPile = numCrates - leftPile;
        // Recursively calculate the number of trucks needed for each smaller pile
        return numTrucks(leftPile, loadSize) + numTrucks(rightPile, loadSize);
    }
}
