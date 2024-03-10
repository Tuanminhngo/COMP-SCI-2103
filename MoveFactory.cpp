#include "MoveFactory.h"

// Generate a Move object based on the given move string
Move * MoveFactory:: generateMove(std::string move_str)
{
    if(move_str == "Rock"){
        return new Rock();
    } else if( move_str == "Paper"){
        return new Paper();
    }else if( move_str == "Scissors"){
        return new Scissors();
    }else if( move_str == "Pirate"){
        return new Pirate();
    }else if( move_str == "Monkey"){
        return new Monkey();
    }else if( move_str == "Ninja"){
        return new Ninja();
    }else if( move_str == "Zombie"){
        return new Zombie();
    }else if( move_str == "Robot"){
        return new Robot();
    } 

    return nullptr; // Return nullptr for invalid move string
    
};