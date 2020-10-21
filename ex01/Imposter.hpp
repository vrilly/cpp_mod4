// Created by Tom Jans on 10/21/20.

#ifndef IMPOSTER_HPP
#define IMPOSTER_HPP


#include "Enemy.hpp"

class Imposter : public Enemy
{
    virtual void takeDamage(int damage);
public:
    Imposter();
    virtual ~Imposter();
    Imposter(const Imposter &imposter);
    Imposter &operator=(const Imposter &imposter);
};


#endif //IMPOSTER_HPP
