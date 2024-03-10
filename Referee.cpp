#include "Referee.h"
#include "Player.h"

// Constructor
Referee::Referee() {}

// Match two players and return a reference to the winning player (or nullptr in case of a tie)
Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    return determineWinner(move1, move2);
}

// Determine the winner of a single round
Player* Referee::determineWinner(Move* move1, Move* move2) {
    // Implement logic to determine the winner based on the moves
    // Return the winning player or nullptr in case of a tie
    return nullptr; // Placeholder, to be implemented
}
