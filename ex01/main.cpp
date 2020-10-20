// Created by Tom Jans on 01-10-20.

#include <iostream>
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
    Character *me = new Character("me");
    std::cout << *me;
    Enemy *b = new RadScorpion();
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    me->attack(b);
    return (0);
}
