// Created by Tom Jans on 10/20/20.

#include <iostream>
#include "Cure.hpp"

Cure::Cure()
    : AMateria("cure")
{}

AMateria *Cure::clone() const
{
    return new Cure;
}

void Cure::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
Cure::Cure(const Cure &cure)
    :AMateria(cure)
{
    *this = cure;
}
Cure &Cure::operator=(const Cure &cure)
{
    (void)cure;
    return *this;
}
Cure::~Cure()
{

}
