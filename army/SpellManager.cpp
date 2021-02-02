#include <iostream>
#include "SpellManager.h"
#include "FireballSpell.h"


int SpellManager::s_test = 42;

SpellManager& SpellManager::instance()
{
    static SpellManager spellManager;

    return spellManager;
}

SpellManager::SpellManager()
{
    m_spellBook.emplace(SPELL::Fireball, std::make_unique<FireballSpell>(43));
}

ISpell* SpellManager::getSpell(SPELL spell) const
{
    auto search = m_spellBook.find(spell);
    if (search != m_spellBook.end())
    {
        return search->second.get();
    }

    return nullptr;
}