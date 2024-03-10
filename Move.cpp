#include "Move.h"

// Implementation of the virtual function to get the name of the move
std::string Move::getName() {
    return name;
}

// Implementation of the virtual function to check if this move beats the opponent's move
bool Move::canBeats(Move* opp_move) {
    // Placeholder implementation, returns false by default
    // Subclasses should override this function to provide specific logic
    return false;
}
