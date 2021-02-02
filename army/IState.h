#pragma once

class IUnit;

class IState
{
public:
    virtual ~IState() = default;

    void setContext(IUnit* context);

    virtual void attack(IUnit* target) = 0;

protected:
    IUnit* m_context;
};