#include "Human.h"
#include "Move.h"
#include <iostream>

// Constructor sets the name of the human player
Human::Human(const std::string& playerName) : name(playerName) {}

// Implementation of the makeMove function
Move* Human::makeMove() {
    std::string moveName;
    std::cout << "Enter move for " << name << ": ";
    std::cin >> moveName;

    // Create the corresponding move object based on the entered name
    // Note: This requires proper error handling for invalid input
    // Here, I assume a simple mapping between input and move classes
    if (moveName == "Rock") {
        return new Rock();
    } else if (moveName == "Paper") {
        return new Paper();
    } else if (moveName == "Scissors") {
        return new Scissors();
    } else if (moveName == "Robot") {
        return new Robot();
    } else if (moveName == "Monkey") {
        return new Monkey();
    } else if (moveName == "Pirate") {
        return new Pirate();
    } else if (moveName == "Ninja") {
        return new Ninja();
    } else if (moveName == "Zombie") {
        return new Zombie();
    } else {
        // Invalid input, return nullptr (you might want to handle this more gracefully)
        std::cerr << "Invalid move entered." << std::endl;
        return nullptr;
    }
}

// Implementation of the getName function
std::string Human::getName() const {
    return name;
}
