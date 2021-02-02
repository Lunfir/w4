#include <iostream>

#include "ISpellCaster.h"

ISpellCaster::ISpellCaster(const std::string& name, 
        int hp, int pAttack, int mp, int mAttack,
        std::unique_ptr<IState> state)
    : IUnit(name, hp, pAttack, std::move(state))
    , m_mp(mp)
    , m_mAttack(mAttack)
{

}

void ISpellCaster::print() const
{
    std::cout << "===================\n"
              << "name:   " << m_name << "\n"
              << "hp  :   " << m_hp << "\n"
              << "mp  :   " << m_mp << "\n"
              << "pAtt:   " << m_pAttack << "\n"
              << "mAtt:   " << m_mAttack << "\n"
              << "state:  " << typeid(*m_state).name() << "\n"
              << "===================\n";
}