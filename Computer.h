#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player {
    protected:
        std::string name; // Name of the computer player

    public:
        // Default constructor
        Computer();
        
        // Constructor with name
        Computer(std::string name);
        
        // Make a move (override from Player)
        Move* makeMove();
        
        // Get the name of the computer player (override from Player)
        std::string getName();
};

#endif
