// Created by Tom Jans on 10/20/20.

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
public:
    virtual ~ICharacter() {}
    virtual const std::string &getName() const = 0;
    virtual void equip(AMateria *materia) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &target) = 0;
};

#endif //ICHARACTER_HPP
