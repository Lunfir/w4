#pragma once

#include <memory>
#include <unordered_map>

#include "ISpell.h"

class SpellManager
{
public:
    static SpellManager& instance();

    ~SpellManager() = default;

    ISpell* getSpell(SPELL spell) const;

protected:
    std::unordered_map<SPELL, std::unique_ptr<ISpell>> m_spellBook;

private:
    static int s_test;

    SpellManager();
    SpellManager(const SpellManager& other) = delete;
    void operator=(const SpellManager& other) = delete;
};