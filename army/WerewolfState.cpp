#include <iostream>
#include "WerewolfState.h"
#include "IUnit.h"

void WerewolfState::attack(IUnit* target)
{
    // counter attack
    
    // is target is dead or alive?
    target->setHp(target->getHp() - m_context->getPAttack());

    std::cout << __PRETTY_FUNCTION__ << std::endl;
}