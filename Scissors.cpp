#include "Paper.h"
#include "Scissors.h"
#include <iostream>

Scissors::Scissors()
{
    this->name="Scissors";
}

std::string Scissors::  getName()
{
    return name;
}  

bool Scissors::  canBeats(Move * opp_move)
{
    if(opp_move->getName() ==  "Paper"){
        return true;
    }else {
        return false;
    }
} 