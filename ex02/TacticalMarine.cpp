// Created by Tom Jans on 10/19/20.

#include <MacTypes.h>
#include <iostream>
#include "TacticalMarine.hpp"

ISpaceMarine *TacticalMarine::clone() const
{
    return new TacticalMarine(*this);
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword" << std::endl;
}

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &marine)
{
    *this = marine;
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &marine)
{
    (void) marine;
    return *this;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh..." << std::endl;
}
