#include "Human.h"
#include "MoveName.h"

#include <iostream>

// Default constructor
Human::Human() : Human("Human") {}

// Constructor with name
Human::Human(std::string name_input) 
{
    name = name_input;
}

// Make a move (override from Player)
Move* Human::makeMove() 
{
    std::string move;
    std::cin >> move; 
    MoveName MoveName;
    return MoveName.generateMove(move);
}

// Get the name of the human player (override from Player)
std::string Human::getName() 
{
    return name;
}
