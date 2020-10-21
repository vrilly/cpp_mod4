// Created by Tom Jans on 10/20/20.

#include "Character.hpp"

const std::string &Character::getName() const
{
    return name;
}

void Character::equip(AMateria *materia)
{
    for (int i = 0; i < 4; i++) {
        if (!inventory[i]) {
            inventory[i] = materia;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (inventory[idx])
        inventory[idx]->use(target);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (inventory[i])
            delete inventory[i];
}

Character::Character(const std::string &name)
    : name(name)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const Character &character)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    *this = character;
}

Character &Character::operator=(const Character &character)
{
    if (this == &character)
        return *this;
    name = character.name;
    for (int i = 0; i < 4; i++) {
        if (inventory[i]) {
            delete inventory[i];
            inventory[i] = NULL;
        }
        if (character.inventory[i])
            inventory[i] = character.inventory[i]->clone();
    }
    return *this;
}
