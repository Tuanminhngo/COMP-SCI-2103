#include "Paper.h"
#include "Rock.h"

#include <iostream>

Paper::Paper()
{
    this->name="Paper";
}

std::string Paper::  getName()
{
    return name;
} 

bool Paper::  canBeats(Move * opp_move)
{
    if(opp_move->getName() ==  "Rock"){
        return true;
    }else {
        return false;
    }
} 