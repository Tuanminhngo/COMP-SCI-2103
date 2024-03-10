#include "Ninja.h"
#include "Zombie.h"
#include "Robot.h"

Robot::Robot()
{
    this->name="Robot";
}

std::string Robot:: getName(){
    return name;
}

bool  Robot:: canBeats(Move * opp_move)
{
    if((opp_move->getName() ==  "Zombie") || (opp_move->getName() == "Ninja")){
        return true;
    } else{
        return false;
    }
} 