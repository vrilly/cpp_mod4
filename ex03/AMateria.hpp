// Created by Tom Jans on 10/20/20.

#ifndef AMATERIA_HPP
#define AMATERIA_HPP


#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
private:
    unsigned int xp;
    std::string type;
    AMateria();
public:
    AMateria(const std::string &type);
    AMateria(const AMateria &materia);
    AMateria &operator=(const AMateria &materia);
    virtual ~AMateria();
    const std::string &getType() const;
    unsigned int getXP() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};


#endif //AMATERIA_HPP
