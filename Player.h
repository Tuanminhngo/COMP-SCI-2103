// #ifndef PLAYER_H
// #define PLAYER_H

// class Player {
// public:
//   virtual char makeMove() = 0;
//   virtual std::string getName() const = 0;
// };

// #endif

// Player.h

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    virtual char makeMove() = 0;
    virtual std::string getName() = 0;
    virtual ~Player() = default; // Virtual destructor for proper polymorphism
};

#endif // PLAYER_H
