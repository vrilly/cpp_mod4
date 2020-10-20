// Created by Tom Jans on 01-10-20.
#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
    virtual void attack() const;
public:
    PowerFist();
};


#endif //POWERFIST_HPP
