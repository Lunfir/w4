#pragma once

#include "IUnit.h"

class Werewolf : public IUnit
{
public:
    Werewolf(const std::string& name, int hp, int pAttack);
    virtual ~Werewolf() = default;

    void pAttack(IUnit* target) override;
    void transform();

};