#pragma once


enum SPELL
{
    Fireball,
    Freeze,
    StarSurge
};

class ISpell
{
public:
    ISpell(SPELL name, int cost);
    virtual ~ISpell() = default;

    const int getCost() const;
    
protected:
    SPELL m_name;
    int m_cost;
};