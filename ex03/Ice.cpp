// Created by Tom Jans on 10/20/20.

#include <iostream>
#include "Ice.hpp"

Ice::Ice()
    : AMateria("ice")
{}

AMateria *Ice::clone() const
{
    return new Ice;
}

void Ice::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"
              << std::endl;
}
