#ifndef MONKEY_H
#define MONKEY_H

#include "Move.h"

class Monkey : public Move {
    public:
        // Constructor
        Monkey();

        // Get the name of the Monkey move (override from Move)
        std::string getName();

        // Check if Monkey beats the opponent's move (override from Move)
        bool canBeats(Move* opp_move);
};

#endif
