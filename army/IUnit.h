#pragma once

#include <string>

#include "IContext.h"


class IUnit : public IContext
{
public:
    IUnit(const std::string& name, int hp, int pAttack, std::unique_ptr<IState> state);
    virtual ~IUnit() = default;

    virtual void pAttack(IUnit* target) = 0;

    void print() const;

    void setHp(const int hp);
    const int getHp() const;

    void setPAttack(const int pAttack);
    const int getPAttack() const;

protected:
    std::string m_name;
    int m_hp;
    int m_pAttack;
};