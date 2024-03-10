// Computer.cpp

#include "Computer.h"

Computer::Computer() {
    // Initialize possible moves
    possibleMoves.push_back(new RockMove());
    possibleMoves.push_back(new PaperMove());
    possibleMoves.push_back(new ScissorsMove());
    possibleMoves.push_back(new RobotMove());
    possibleMoves.push_back(new MonkeyMove());
    possibleMoves.push_back(new PirateMove());
    possibleMoves.push_back(new NinjaMove());
    possibleMoves.push_back(new ZombieMove());

    // Seed the random engine
    randomEngine.seed(std::random_device()());
}

Computer::~Computer() {
    // Clean up allocated moves
    for (Move* move : possibleMoves) {
        delete move;
    }
}

Move* Computer::makeMove() {
    // Randomly choose a move
    std::uniform_int_distribution<size_t> distribution(0, possibleMoves.size() - 1);
    size_t index = distribution(randomEngine);

    return possibleMoves[index];
}

std::string Computer::getName() {
    return "Computer";
}
