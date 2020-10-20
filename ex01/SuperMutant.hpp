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
    ~SuperMutant();
};


#endif //SUPERMUTANT_HPP
