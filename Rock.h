#ifndef ROCK_H
#define ROCK_H

#include "Move.h"

class Rock : public Move {
     public:
          // Constructor
          Rock();

          // Get the name of the Rock move (override from Move)
          std::string getName();

          // Check if Rock beats the opponent's move (override from Move)
          bool canBeats(Move* opp_move);
};

#endif
