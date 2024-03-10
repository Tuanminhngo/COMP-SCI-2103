#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"

class Zombie : public Move {
    public:
        // Constructor
        Zombie();

        // Get the name of the Zombie move (override from Move)
        std::string getName();

        // Check if Zombie beats the opponent's move (override from Move)
        bool canBeats(Move* opp_move);
};

#endif
