#include <iostream>

#include "Soldier.h"
#include "HumanState.h"


Soldier::Soldier(const std::string& name, int hp, int pAttack)
    :IUnit(name, hp, pAttack,
        std::unique_ptr<IState>(new HumanState()))
{
}

void Soldier::pAttack(IUnit* target)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}