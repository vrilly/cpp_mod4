// Created by Tom Jans on 01-10-20.
#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP


#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
    virtual void attack() const;
public:
    PlasmaRifle();
    virtual ~PlasmaRifle() {};
    PlasmaRifle(const PlasmaRifle &rifle);
    PlasmaRifle &operator=(const PlasmaRifle &rifle);
};


#endif //PLASMARIFLE_HPP
