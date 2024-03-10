// Human.cpp

#include "Human.h"
#include <iostream>

Human::Human() {
    // No need for initialization in this example
}

Human::~Human() {
    // No need for cleanup in this example
}

Move* Human::makeMove() {
    // Get move input from the user
    std::string moveName;
    std::cout << "Enter move: ";
    std::cin >> moveName;

    // Create a move object based on user input
    if (moveName == "Rock") {
        return new RockMove();
    } else if (moveName == "Paper") {
        return new PaperMove();
    } else if (moveName == "Scissors") {
        return new ScissorsMove();
    } else if (moveName == "Robot") {
        return new RobotMove();
    } else if (moveName == "Monkey") {
        return new MonkeyMove();
    } else if (moveName == "Pirate") {
        return new PirateMove();
    } else if (moveName == "Ninja") {
        return new NinjaMove();
    } else if (moveName == "Zombie") {
        return new ZombieMove();
    } else {
        // Default to RockMove if the input is not recognized
        std::cout << "Unrecognized move. Defaulting to Rock." << std::endl;
        return new RockMove();
    }
}

std::string Human::getName() {
    return "Human";
}
