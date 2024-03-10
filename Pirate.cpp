#include "Robot.h"
#include "Monkey.h"
#include "Pirate.h"

Pirate::Pirate() 
{
    this->name="Pirate";
}

std::string Pirate:: getName()
{
    return name;
}  

bool  Pirate:: canBeats(Move * opp_move)
{
    if((opp_move->getName() ==  "Monkey") || (opp_move->getName() ==  "Robot")){
        return true;
    } else{
        return false;
    }
}

