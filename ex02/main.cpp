// Created by Tom Jans on 01-10-20.

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include <cassert>

int main()
{
    ISpaceMarine *bob = new TacticalMarine;
    ISpaceMarine *jim = new AssaultTerminator;
    ISpaceMarine *useless = new TacticalMarine;

    ISquad *vlc = new Squad;
    ISquad *assigntest = new Squad;
    assigntest->push(useless);
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i) {
        ISpaceMarine *cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    ISquad *copy = new Squad(*(Squad *) vlc);
    *assigntest = *copy;
    for (int i = 0; i < assigntest->getCount(); ++i){
        ISpaceMarine *cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    assert(copy->getUnit(999) == NULL);
    delete vlc;
    delete copy;
    delete assigntest;
    return 0;
}
