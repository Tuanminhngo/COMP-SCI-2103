#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H

#include "Move.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissors.h"
#include "Paper.h"
#include "Pirate.h"
#include "Monkey.h"
#include "Zombie.h"
#include "Ninja.h"

class MoveFactory{
    public:
    // Generate a Move object based on the given move string
    Move * generateMove(std::string move_str);
};
#endif