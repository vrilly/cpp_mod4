// Created by Tom Jans on 10/21/20.

#include <iostream>
#include "Imposter.hpp"

void Imposter::takeDamage(int damage)
{
    if (damage < 9000)
        Enemy::takeDamage(0);
    else
        Enemy::takeDamage(damage);
}

Imposter::Imposter()
    : Enemy(1, "Imposter")
{
    std::cout << "I'm just a crewmate!" << std::endl;
}

Imposter::~Imposter()
{
    std::cout << "Imposter was an Imposter!" << std::endl;
}

Imposter::Imposter(const Imposter &imposter)
{
    *this = imposter;
}

Imposter &Imposter::operator=(const Imposter &imposter)
{
    return *this;
}
