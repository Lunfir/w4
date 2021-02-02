#include <iostream>

#include "ISpell.h" 
#include "IState.h"
#include "HumanState.h"
#include "SpellManager.h"
#include "Wizard.h"

Wizard::Wizard(const std::string& name, 
        int hp, int pAttack, 
        int mp, int mAttack)
    : ISpellCaster(name, hp, pAttack, mp, mAttack,
        std::unique_ptr<IState>(new HumanState()))
{
}

void Wizard::pAttack(IUnit* target)
{
    m_state->attack(target);
}

void Wizard::mAttack(IUnit* target)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    ISpell* spell = SpellManager::instance().getSpell(SPELL::Fireball);

    std::cout << "getCost(): " << spell->getCost() << std::endl;
}