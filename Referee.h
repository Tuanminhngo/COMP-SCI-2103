#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"

class Referee {
public:
  // Determines the winner and returns a reference to the winning player, or nullptr for a tie
  const Player* determineWinner(const Player& human, const Player& computer) const;
};

#endif
