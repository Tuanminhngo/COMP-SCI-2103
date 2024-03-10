#ifndef MOVE_H
#define MOVE_H

#include <string>

class Player; // Forward declaration

class Move {
public:
    virtual ~Move() = default;

    // Determine the winner of a single round
    virtual Player* determineWinner(Move* opponentMove) const = 0;

    // Get the name of the move
    virtual std::string getName() const = 0;
};

class Rock : public Move {
public:
    Player* determineWinner(Move* opponentMove) const override;
    std::string getName() const override;
};

class Paper : public Move {
public:
    Player* determineWinner(Move* opponentMove) const override;
    std::string getName() const override;
};

class Scissors : public Move {
public:
    Player* determineWinner(Move* opponentMove) const override;
    std::string getName() const override;
};

class Robot : public Move {
public:
    Player* determineWinner(Move* opponentMove) const override;
    std::string getName() const override;
};

class Monkey : public Move {
public:
    Player* determineWinner(Move* opponentMove) const override;
    std::string getName() const override;
};

class Pirate : public Move {
public:
    Player* determineWinner(Move* opponentMove) const override;
    std::string getName() const override;
};

class Ninja : public Move {
public:
    Player* determineWinner(Move* opponentMove) const override;
    std::string getName() const override;
};

class Zombie : public Move {
public:
    Player* determineWinner(Move* opponentMove) const override;
    std::string getName() const override;
};

#endif // MOVE_H
