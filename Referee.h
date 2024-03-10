#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"

class Referee {
public:
    // Constructor
    Referee();

    // Match two players and return a reference to the winning player (or nullptr in case of a tie)
    Player* refGame(Player* player1, Player* player2);

private:
    // Determine the winner of a single round
    Player* determineWinner(Move* move1, Move* move2);
};

#endif // REFEREE_H
