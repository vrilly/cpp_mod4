// Created by Tom Jans on 10/19/20.

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP


#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
    ISpaceMarine *clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
public:
    AssaultTerminator();
    AssaultTerminator(const AssaultTerminator &terminator);
    AssaultTerminator &operator=(const AssaultTerminator &terminator);
    virtual ~AssaultTerminator();
};


#endif
