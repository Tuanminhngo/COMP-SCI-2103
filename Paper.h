#ifndef PAPER_H
#define PAPER_H

#include "Move.h"

// Paper class declaration, inheriting from Move
class Paper : public Move {
     public:
     // Constructor
     Paper();

     // Get the name of the Paper move (override from Move)
     std::string getName();

     // Check if Paper beats the opponent's move (override from Move)
     bool canBeats(Move* opp_move);
};

#endif
