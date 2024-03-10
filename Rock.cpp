#include "Rock.h"
#include "Scissors.h"
#include <iostream>

Rock::Rock()
{
    this->name="Rock";
}

std::string Rock:: getName()
{
    return "Rock";
}

bool Rock:: canBeats(Move * opp_move){
    if(opp_move->getName() == "Scissors"){
        return true;
    }else {
        return false;
    }
} 
