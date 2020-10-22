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

PowerFist::PowerFist(const PowerFist &fist)
{
    *this = fist;
}

PowerFist &PowerFist::operator=(const PowerFist &fist)
{
    (void)fist;
    return *this;
}
PowerFist::~PowerFist()
{

}
