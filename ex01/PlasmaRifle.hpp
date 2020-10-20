// Created by Tom Jans on 01-10-20.
#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP


#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
    virtual void attack() const;
public:
    PlasmaRifle();
};


#endif //PLASMARIFLE_HPP
