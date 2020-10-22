// Created by Tom Jans on 24-08-20.
#include "Victim.hpp"

const std::string &Victim::getName() const
{
    return name;
}

Victim::Victim(const Victim &victim)
{
    *this = victim;
}

Victim::Victim(const std::string &name)
{
    std::cout << "Some random victim called " << name << " just appeared!"
              << std::endl;
    this->name = name;
}

Victim::~Victim()
{
    std::cout << "Victim " << name << " just died for no apparent reason!"
              << std::endl;
}

Victim &Victim::operator=(const Victim &victim)
{
    this->name = victim.name;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Victim &victim)
{
    os << "I'm " << victim.getName() << " and I like otters!" << std::endl;
    return os;
}

void Victim::getPolymorphed() const
{
    std::cout << name << " has been turned into a cute little sheep!"
              << std::endl;
}
Victim::Victim()
{

}
