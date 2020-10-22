// Created by Tom Jans on 01-10-20.
#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage)
    : name(name), apcost(apcost), damage(damage)
{
}

AWeapon::~AWeapon()
{

}

std::string AWeapon::getName() const
{
    return name;
}

int AWeapon::getAPCost() const
{
    return apcost;
}

int AWeapon::getDamage() const
{
    return damage;
}

AWeapon::AWeapon(const AWeapon &weapon)
{
    *this = weapon;
}

AWeapon &AWeapon::operator=(const AWeapon &weapon)
{
    name = weapon.getName();
    apcost = weapon.getAPCost();
    damage = weapon.getDamage();
    return *this;
}
AWeapon::AWeapon()
{

}
