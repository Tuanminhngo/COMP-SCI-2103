#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"

class Scissors : public Move {
     public:
     // Constructor
     Scissors();

     // Get the name of the Scissors move (override from Move)
     std::string getName();

     // Check if Scissors beats the opponent's move (override from Move)
     bool canBeats(Move* opp_move);
};

#endif
