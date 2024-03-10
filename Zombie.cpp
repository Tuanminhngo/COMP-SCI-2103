#include "Monkey.h"
#include "Zombie.h"
#include "Pirate.h"

Zombie::Zombie()
{
    this->name="Zombie";
}

std::string Zombie:: getName()
{
    return name;
}  

bool  Zombie:: canBeats(Move * opp_move)
{
    if((opp_move->getName() ==  "Monkey") || (opp_move->getName() ==  "Pirate")){
        return true;
    } else{
        return false;
    }
} 
