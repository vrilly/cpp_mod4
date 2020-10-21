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

PlasmaRifle::PlasmaRifle(const PlasmaRifle &rifle)
{
    *this = rifle;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &rifle)
{
    (void)rifle;
    return *this;
}
