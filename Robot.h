#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"

class Robot : public Move {
    public:
        // Constructor
        Robot();

        // Get the name of the Robot move (override from Move)
        std::string getName();

        // Check if Robot beats the opponent's move (override from Move)
        bool canBeats(Move* opp_move);
};

#endif
