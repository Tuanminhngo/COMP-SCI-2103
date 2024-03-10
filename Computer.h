// Computer.h

#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include "Move.h"
#include <vector>
#include <random>

class Computer : public Player {
private:
    std::vector<Move*> possibleMoves;
    std::default_random_engine randomEngine;

public:
    Computer();
    ~Computer();

    Move* makeMove() override;
    std::string getName() override;
};

#endif // COMPUTER_H
