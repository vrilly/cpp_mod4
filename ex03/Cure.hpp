// Created by Tom Jans on 10/20/20.

#ifndef CURE_HPP
#define CURE_HPP


#include "AMateria.hpp"

class Cure: public AMateria
{
public:
    Cure();
    virtual void use(ICharacter &target);
    AMateria *clone() const;
};


#endif //CURE_HPP
