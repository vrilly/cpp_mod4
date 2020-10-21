// Created by Tom Jans on 01-10-20.
#include "Character.hpp"

Character::Character(const std::string &name)
    : name(name), ap(40), current_weapon(NULL)
{
}

Character::Character(const Character &character)
{
    *this = character;
}

Character::~Character()
{
}

Character &Character::operator=(const Character &character)
{
    name = character.getName();
    ap = character.getAp();
    return *this;
}

void Character::recoverAP()
{
    ap += 10;
    if (ap > 40)
        ap = 40;
}

void Character::equip(AWeapon *weapon)
{
    this->current_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
    if (!current_weapon)
        return;
    if (current_weapon->getAPCost() > ap) {
        std::cout << name << " has not enough AP for the attack" << std::endl;
        return;
    }
    std::cout << name << " attacks " << enemy->getType() << " with a "
              << current_weapon->getName() << std::endl;
    current_weapon->attack();
    ap -= current_weapon->getAPCost();
    if (ap < 0)
        ap = 0;
    else
        enemy->takeDamage(current_weapon->getDamage());
    if (enemy->getHP() <= 0)
        delete enemy;
}

std::string Character::getName() const
{
    return name;
}

int Character::getAp() const
{
    return ap;
}

AWeapon *Character::getCurrent_weapon() const
{
    return current_weapon;
}

std::ostream &operator<<(std::ostream &os, const Character &character)
{
    os << character.getName() << " has " << character.getAp() << " AP and ";
    if (character.getCurrent_weapon())
        os << "wields a " << character.getCurrent_weapon()->getName();
    else
        os << "is unarmed";
    os << std::endl;
    return os;
}
