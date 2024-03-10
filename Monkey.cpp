#include "Ninja.h"
#include "Monkey.h"
#include "Robot.h"

Monkey::Monkey()
{
    this->name="Monkey";
}

std::string Monkey:: getName()
{
    return name;
};

bool Monkey:: canBeats(Move * opp_move)
{
    if((opp_move->getName() ==  "Robot") || (opp_move->getName() ==  "Ninja")){
        return true;
    } else{
        return false;
    }
};