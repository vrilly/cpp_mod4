// Created by Tom Jans on 10/20/20.

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type)
    : xp(0), type(type)
{
}

AMateria::AMateria(const AMateria &materia)
{
    *this = materia;
}

AMateria &AMateria::operator=(const AMateria &materia)
{
    (void) materia;
    return *this;
}

AMateria::~AMateria()
{

}

const std::string &AMateria::getType() const
{
    return type;
}

unsigned int AMateria::getXP() const
{
    return xp;
}

void AMateria::use(ICharacter &target)
{
    xp += 10;
    (void) target;
}
AMateria::AMateria()
{

}
