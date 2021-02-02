#pragma once

#include "ISpellCaster.h"

class Wizard : public ISpellCaster
{
public:
    Wizard(const std::string& name, 
        int hp, int pAttack, 
        int mp, int mAttack);

    ~Wizard() = default;

    void pAttack(IUnit* target) override;
    void mAttack(IUnit* target) override;
};