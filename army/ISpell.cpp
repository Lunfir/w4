#include "ISpell.h"

ISpell::ISpell(SPELL name, int cost)
    : m_name(name)
    , m_cost(cost)
{

}

const int ISpell::getCost() const
{
    return m_cost;
}