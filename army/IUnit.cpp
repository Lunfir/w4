#include <iostream>
#include <typeinfo>

#include "IUnit.h"

IUnit::IUnit(const std::string& name, int hp, int pAttack, std::unique_ptr<IState> state)
    : m_name(name)
    , m_hp(hp)
    , m_pAttack(pAttack)
{
    // std::move allows to transfer data avoiding extra copying
    this->switchTo(std::move(state));
}

void IUnit::print() const
{
    std::cout << "===================\n"
              << "name:   " << m_name << "\n"
              << "hp  :   " << m_hp << "\n"
              << "pAtt:   " << m_pAttack << "\n"
              << "state:  " << typeid(*m_state).name() << "\n"
              << "===================\n";
}

void IUnit::setHp(const int hp)
{
    this->m_hp = hp;
}

const int IUnit::getHp() const
{
    return m_hp;
}

void IUnit::setPAttack(const int pAttack)
{
    this->m_pAttack = pAttack;
}

const int IUnit::getPAttack() const
{
    return m_pAttack;
}

void IUnit::switchTo(std::unique_ptr<IState> state)
{
    std::cout << "Context: switch to " << typeid(*state).name() << ".\n";
    this->m_state = std::move(state);
    this->m_state->setContext(this);
}