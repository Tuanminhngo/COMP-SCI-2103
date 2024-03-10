#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <string>

class Human : public Player {
public:
    // Constructor
    explicit Human(const std::string& name = "Human");

    // Implementing the Player interface
    Move* makeMove() override; // Override the pure virtual function
    std::string getName() const override; // Override the pure virtual function

private:
    std::string name; // The name of the human player
};

#endif // HUMAN_H
