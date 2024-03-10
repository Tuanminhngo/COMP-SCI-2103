#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {
protected:
        std::string name; // Name of the move

    public:
        // Virtual function to get the name of the move 
        virtual std::string getName() = 0;

        // Virtual function to check if this move beats the opponent's move 
        virtual bool canBeats(Move* opp_move) = 0;
};

#endif // MOVE_H
