#include "Ninja.h"
#include "Zombie.h"
#include "Pirate.h"

Ninja::Ninja()
{
    this->name="Ninja";
}

std::string Ninja:: getName()
{
    return name;
};

bool  Ninja:: canBeats(Move * opp_move)
{
    if((opp_move->getName() ==  "Zombie") || (opp_move->getName() == "Pirate")){
        return true;
    } else{
        return false;
    }
};

