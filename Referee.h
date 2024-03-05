#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"

class Referee {
public:
    Referee(); // Constructor
    Player* refGame(Player* player1, Player* player2); // Returns the reference to the winning player
};

#endif 
