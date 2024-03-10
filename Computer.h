#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include "Move.h"

class Computer : public Player {
public:
    // Constructor
    Computer();

    // Implementing the Player interface
    Move* makeMove() override; // Override the pure virtual function
    std::string getName() const override; // Override the pure virtual function

private:
    // Generate a random move for the computer
    Move* generateRandomMove() const;
};

#endif // COMPUTER_H
