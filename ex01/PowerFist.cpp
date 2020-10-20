// Created by Tom Jans on 01-10-20.
#include "PowerFist.hpp"

void PowerFist::attack() const
{
    std::cout << "* pschhh.... SBAM! *" << std::endl;
}

PowerFist::PowerFist()
    : AWeapon("Power Fist", 8, 50)
{
}
