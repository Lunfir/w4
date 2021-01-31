#include <iostream>
#include "Werewolf.h"
#include "HumanState.h"
#include "WerewolfState.h"

Werewolf::Werewolf(const std::string& name, int hp, int pAttack)
    :IUnit(name, hp, pAttack,
        std::unique_ptr<IState>(new HumanState()))
{
}

void Werewolf::pAttack(IUnit* target)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    WerewolfState* state = dynamic_cast<WerewolfState*>(m_state.get());

    if (state)
    {
        target->switchTo(std::make_unique<WerewolfState>());
    }

    m_state->attack(target);
}

void Werewolf::transform()
{
    // dynamic_cast returns a nullptr in a case of unsuccessfull cast
    if (dynamic_cast<HumanState*>(m_state.get()))
    {
        switchTo(std::make_unique<WerewolfState>());
    }
}