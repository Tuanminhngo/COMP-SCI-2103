#ifndef NINJA_H
#define NINJA_H

#include "Move.h"

class Ninja : public Move {
    public:
        // Constructor
        Ninja();

        // Get the name of the Ninja move (override from Move)
        std::string getName();

        // Check if Ninja beats the opponent's move (override from Move)
        bool canBeats(Move* opp_move);
};

#endif
