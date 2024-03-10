#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
    protected:
        std::string name; 

    public:
        // Default constructor
        Human();
        
        // Constructor with custom name
        Human(std::string name);
        
        // Get the name of the human player (override from Player)
        std::string getName();
        
        // Make a move (override from Player)
        Move* makeMove();
    
};

#endif
