// Player.h

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Move;  // Forward declaration

class Player {
public:
    virtual Move* makeMove() = 0;
    virtual std::string getName() = 0;
    virtual ~Player() = default; // Virtual destructor for proper polymorphism
};

#endif // PLAYER_H
