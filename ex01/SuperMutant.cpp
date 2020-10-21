// Created by Tom Jans on 01-10-20.
#include "SuperMutant.hpp"

void SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
}

SuperMutant::SuperMutant()
    : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &mutant)
{
    *this = mutant;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &mutant)
{
    (void)mutant;
    return *this;
}
