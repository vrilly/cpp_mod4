// Created by Tom Jans on 10/19/20.

#include <MacTypes.h>
#include <iostream>
#include "AssaultTerminator.hpp"

ISpaceMarine *AssaultTerminator::clone() const
{
    return new AssaultTerminator(*this);
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &terminator)
{
    *this = terminator;
}

AssaultTerminator &
AssaultTerminator::operator=(const AssaultTerminator &terminator)
{
    (void) terminator;
    return *this;
}
