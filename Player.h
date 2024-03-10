#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Move; // Forward declaration

class Player {
public:
    // Destructor
    virtual ~Player() = default;

    // Virtual function to make a move
    virtual Move* makeMove() = 0;

    // Function to get the player's name
    virtual std::string getName() const = 0;
};

#endif // PLAYER_H
