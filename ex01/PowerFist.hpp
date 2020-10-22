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
    virtual ~PowerFist();
    PowerFist(const PowerFist &fist);
    PowerFist &operator=(const PowerFist &fist);
};


#endif //POWERFIST_HPP
