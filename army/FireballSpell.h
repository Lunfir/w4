#pragma once

#include <iostream>

#include "ISpell.h"

class FireballSpell : public ISpell
{
public:
    FireballSpell(int cost);

    ~FireballSpell() = default;
};
