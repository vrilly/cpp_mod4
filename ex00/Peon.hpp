// Created by Tom Jans on 01-10-20.
#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon: public Victim
{
    Peon();
public:
    Peon(const std::string &name);
    Peon(const Peon &peon);
    Peon &operator=(const Peon &peon);
    ~Peon();
    virtual void getPolymorphed() const;
};


#endif //PEON_HPP
