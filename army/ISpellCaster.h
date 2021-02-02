#pragma once

#include "IUnit.h"

class ISpellCaster : public IUnit
{
public:
    ISpellCaster(const std::string& name, 
        int hp, int pAttack, int mp, int mAttack,
        std::unique_ptr<IState> state);

    ~ISpellCaster() = default;

    virtual void mAttack(IUnit* target) = 0;

    void print() const;

protected:
    int m_mp;
    int m_mAttack;
};