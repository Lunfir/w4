#pragma once

class IContext;
class IUnit;

class IState
{
public:
    virtual ~IState() = default;

    void setContext(IContext* context);

    virtual void attack(IUnit* target) = 0;

protected:
    IContext* m_context;
};