// Move.h

#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {
public:
    virtual std::string getName() const = 0;
    virtual ~Move() = default; // Virtual destructor for proper polymorphism
};

#endif // MOVE_H
