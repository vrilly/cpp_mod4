// Created by Tom Jans on 01-10-20.
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    std::string name;
    int ap;
    AWeapon *current_weapon;
public:
    Character(const std::string &name);
    Character(const Character &character);
    ~Character();
    Character &operator=(const Character &character);
    void recoverAP();
    void equip(AWeapon *weapon);
    void attack(Enemy *enemy);
    std::string getName() const;
    int getAp() const;
    AWeapon *getCurrent_weapon() const;
};

std::ostream &operator<<(std::ostream &os, const Character &character);

#endif //CHARACTER_HPP
