// Created by Tom Jans on 10/19/20.

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP


#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
public:
    TacticalMarine();
    virtual ~TacticalMarine();
    TacticalMarine(const TacticalMarine &marine);
    TacticalMarine &operator=(const TacticalMarine &marine);
    ISpaceMarine *clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};


#endif
