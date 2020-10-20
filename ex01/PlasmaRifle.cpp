// Created by Tom Jans on 01-10-20.
#include <iostream>
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
    : AWeapon("Plasma Rifle", 5, 21)
{
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
