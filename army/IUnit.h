#pragma once

#include <memory>
#include <string>

#include "IState.h"


class IUnit
{
public:
    IUnit(const std::string& name, int hp, int pAttack, std::unique_ptr<IState> state);
    virtual ~IUnit() = default;

    virtual void pAttack(IUnit* target) = 0;

    void switchTo(std::unique_ptr<IState> state);

    void setHp(const int hp);
    const int getHp() const;

    void setPAttack(const int pAttack);
    const int getPAttack() const;

    void print() const;

protected:
    std::string m_name;
    int m_hp;
    int m_pAttack;

    std::unique_ptr<IState> m_state;
};