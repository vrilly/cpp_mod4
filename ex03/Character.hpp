// Created by Tom Jans on 10/20/20.

#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include "ICharacter.hpp"

class Character: public ICharacter
{
    AMateria *inventory[4];
    std::string name;
    Character();
public:
    Character(const std::string &name);
    Character(const Character &character);
    Character &operator=(const Character &character);
    virtual ~Character();
    const std::string &getName() const;
    void equip(AMateria *materia);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};


#endif //CHARACTER_HPP
