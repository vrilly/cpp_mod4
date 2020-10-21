// Created by Tom Jans on 01-10-20.
#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <iostream>

class SuperMutant: public Enemy
{
    virtual void takeDamage(int damage);
public:
    SuperMutant();
    virtual ~SuperMutant();
    SuperMutant(const SuperMutant &mutant);
    SuperMutant &operator=(const SuperMutant &mutant);
};


#endif //SUPERMUTANT_HPP
