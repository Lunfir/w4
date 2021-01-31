#include <iostream>
#include "WerewolfState.h"
#include "IUnit.h"

void WerewolfState::attack(IUnit* target)
{
    // counter attack
    
    // uneccessary. Should be removed when Context ---> IUnit
    IUnit* owner = dynamic_cast<IUnit*>(m_context);

    // is target is dead or alive?
    target->setHp(target->getHp() - owner->getPAttack());

    std::cout << __PRETTY_FUNCTION__ << std::endl;
}