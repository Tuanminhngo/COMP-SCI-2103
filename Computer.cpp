#include "Computer.h"
#include "MoveName.h"

// Default constructor
Computer::Computer() 
{
    name = "Computer";
}

// Constructor with name
Computer::Computer(std::string name) 
{
    this->name = name; 
}

// Make a move 
Move* Computer::makeMove() 
{
    MoveName moveName;
    return moveName.generateMove("Rock");
}

// Get the name of the computer player 
std::string Computer::getName() 
{
    return name;
}
