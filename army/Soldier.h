#pragma once

#include "IUnit.h"

class Soldier : public IUnit
{
public:
    Soldier(const std::string& name, int hp, int pAttack);
    virtual ~Soldier() = default;

    void pAttack(IUnit* target) override;
};