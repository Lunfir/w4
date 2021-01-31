#pragma once

#include "IState.h"

class HumanState : public IState
{
public:
    void attack(IUnit* target) override;
};