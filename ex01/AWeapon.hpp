// Created by Tom Jans on 01-10-20.
#ifndef AWEAPON_HPP
#define AWEAPON_HPP


#include <string>

class AWeapon
{
    std::string name;
    int apcost;
    int damage;
protected:
    AWeapon()
    {};
public:
    AWeapon(const AWeapon &weapon);
    AWeapon(const std::string &name, int apcost, int damage);
    virtual ~AWeapon();
    AWeapon &operator=(const AWeapon &weapon);
    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;
};


#endif //AWEAPON_HPP
