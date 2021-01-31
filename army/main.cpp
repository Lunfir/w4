#include <iostream>
#include <memory>

#include "IUnit.h"
#include "Werewolf.h"
#include "Soldier.h"

int main(int argc, char const *argv[])
{
    std::unique_ptr<Werewolf> wolf = std::make_unique<Werewolf>("wolf", 100, 10);
    std::unique_ptr<Soldier> soldier = std::make_unique<Soldier>("soldier", 100, 10);

    soldier->print();

    // morph to wolf
    wolf->transform();

    wolf->pAttack(soldier.get());

    soldier->print();

    // morph to human
    wolf->transform();

    return 0;
}