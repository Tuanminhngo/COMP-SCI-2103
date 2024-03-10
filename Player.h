#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Move.h"

class Player {
    protected:
        std::string name; // Name of the player

    public:
        // Virtual function for making a move 
        virtual Move* makeMove() = 0;

        // Virtual function to get the name of the player 
        virtual std::string getName() = 0;

        // Virtual destructor 
        virtual ~Player();
};

#endif
