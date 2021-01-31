#pragma once

#include "IState.h"

class WerewolfState : public IState
{
public:
    void attack(IUnit* target) override;
};