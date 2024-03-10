#include "Computer.h"
#include "Move.h"
#include <cstdlib> // For rand() function

// Constructor
Computer::Computer() {}

// Implementation of the makeMove function
Move* Computer::makeMove() {
    // Computer plays randomly
    return generateRandomMove();
}

// Implementation of the getName function
std::string Computer::getName() const {
    return "Computer";
}

// Generate a random move for the computer
Move* Computer::generateRandomMove() const {
    // Generate a random number between 0 and 7 (inclusive)
    int randomMove = rand() % 8;

    switch (randomMove) {
        case 0: return new Rock();
        case 1: return new Paper();
        case 2: return new Scissors();
        case 3: return new Robot();
        case 4: return new Monkey();
        case 5: return new Pirate();
        case 6: return new Ninja();
        case 7: return new Zombie();
        default: return nullptr; // Should not happen, but handle it gracefully
    }
}
