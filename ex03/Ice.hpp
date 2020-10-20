// Created by Tom Jans on 10/20/20.

#ifndef ICE_HPP
#define ICE_HPP


#include "AMateria.hpp"

class Ice: public AMateria
{
public:
    Ice();
    virtual void use(ICharacter &target);
    AMateria *clone() const;
};


#endif //ICE_HPP
