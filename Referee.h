#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"
#include "MoveFactory.h"
#include "Move.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissors.h"
#include "Paper.h"
#include "Pirate.h"
#include "Monkey.h"
#include "Zombie.h"
#include "Ninja.h"

class Referee {
public:
    Referee(); // Constructor

    // Function to adjudicate a game between two players
    Player* refGame(Player* player1, Player* player2);
};

#endif
