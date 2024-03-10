#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"

class Pirate : public Move {
    public:
        // Constructor
        Pirate();

        // Get the name of the Pirate move (override from Move)
        std::string getName();

        // Check if Pirate beats the opponent's move (override from Move)
        bool canBeats(Move* opp_move);
};

#endif
