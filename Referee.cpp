#include "Referee.h"
#include <iostream>

// Constructor
Referee::Referee() {}

// adjudicate a game between two players
Player* Referee::refGame(Player* player1, Player* player2) 
{
    // Get the moves made by each player
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    // Compare the moves to determine the winner
    if (move1->canBeats(move2)) {
        return player1; // Player 1 wins
    } else if (move2->canBeats(move1)) {
        return player2; // Player 2 wins
    } else {
        return nullptr; // It's a tie
    }
}
