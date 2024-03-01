// #ifndef REFEREE_H
// #define REFEREE_H

// #include "Player.h"

// class Referee {
// public:
//   // Determines the winner and returns a reference to the winning player, or nullptr for a tie
//   const Player* determineWinner(const Player& human, const Player& computer) const;
// };

// #endif

// Referee.h

#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"

class Referee {
public:
    Referee(); // Constructor
    Player* refGame(Player* player1, Player* player2); // Returns the reference to the winning player
};

#endif // REFEREE_H
