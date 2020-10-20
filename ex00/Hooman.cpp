// Created by Tom Jans on 10/20/20.

#include "Hooman.hpp"

Hooman::Hooman(const std::string &name)
    : Victim(name)
{
    std::cout << "A human has been summoned by the gods!" << std::endl;
}

Hooman::~Hooman()
{
    std::cout << "*Cough Cough*" << std::endl;
}

void Hooman::getPolymorphed() const
{
    std::cout << this->getName() << "has been turned into a monster!"
              << std::endl;
}

Hooman::Hooman(const Hooman &hooman)
{
    *this = hooman;
}

Hooman &Hooman::operator=(const Hooman &hooman)
{
    if (this == &hooman)
        return *this;
    this->name = hooman.getName();
    return *this;
}
