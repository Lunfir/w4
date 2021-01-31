#include <iostream>
#include <typeinfo>

#include "IContext.h"

IContext::IContext(std::unique_ptr<IState> state)
{
    // std::move allows to transfer data avoiding extra copying
    this->switchTo(std::move(state));
}

void IContext::switchTo(std::unique_ptr<IState> state)
{
    std::cout << "Context: switch to " << typeid(*state).name() << ".\n";
    this->m_state = std::move(state);
    this->m_state->setContext(this);
}