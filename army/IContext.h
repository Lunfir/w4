#pragma once

#include <memory>

#include "IState.h"

// move to IUnit
class IContext
{
public:
    IContext(std::unique_ptr<IState> state);
    virtual ~IContext() = default;

    void switchTo(std::unique_ptr<IState> state);

protected:
    std::unique_ptr<IState> m_state;
};