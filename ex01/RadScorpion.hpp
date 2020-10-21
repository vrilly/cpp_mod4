// Created by Tom Jans on 01-10-20.
#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"
#include <iostream>

class RadScorpion: public Enemy
{
public:
    RadScorpion();
    virtual ~RadScorpion();
    RadScorpion(const RadScorpion &scorpion);
    RadScorpion &operator=(const RadScorpion &scorpion);
};


#endif //RADSCORPION_HPP
