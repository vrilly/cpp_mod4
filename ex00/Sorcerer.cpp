// Created by Tom Jans on 24-08-20.
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title)
    : name(name), title(title)
{
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << name << ", " << title
              << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &sorcerer)
{
    this->name = sorcerer.name;
    this->title = sorcerer.title;
    return *this;
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer)
{
    *this = sorcerer;
}

const std::string &Sorcerer::getName() const
{
    return name;
}

const std::string &Sorcerer::getTitle() const
{
    return title;
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &sorcerer)
{
    os << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle()
       << ", and I like ponies!" << std::endl;
    return os;
}

void Sorcerer::polymorph(const Victim &victim)
{
    victim.getPolymorphed();
}
