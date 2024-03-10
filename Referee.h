// #ifndef REFEREE_H
// #define REFEREE_H

// #include "Player.h"

// class Referee {
// public:
//     Referee(); // Constructor
//     Player* refGame(Player* player1, Player* player2); // Returns the reference to the winning player
// };

// #endif 

// Referee.h

#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"

class Referee {
public:
    Referee();
    ~Referee();

    Player* refGame(Player* player1, Player* player2);

private:
    bool isPlayer1Win(Player* player1, Player* player2);
    bool isPlayer2Win(Player* player1, Player* player2);
    bool isTie(Player* player1, Player* player2);
};

#endif // REFEREE_H

