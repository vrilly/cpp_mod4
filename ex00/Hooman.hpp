// Created by Tom Jans on 10/20/20.

#ifndef HOOMAN_HPP
#define HOOMAN_HPP


#include "Victim.hpp"

class Hooman: public Victim
{
    Hooman()
    {};
public:
    Hooman(const std::string &name);
    Hooman(const Hooman &hooman);
    Hooman &operator=(const Hooman &hooman);
    virtual ~Hooman();
    virtual void getPolymorphed() const;
};


#endif //HOOMAN_HPP
