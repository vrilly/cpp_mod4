// Created by Tom Jans on 24-08-20.
#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
    std::string name;;
protected:
    Victim()
    {}

public:
    const std::string &getName() const;
    Victim(const Victim &victim);
    Victim(const std::string &name);
    ~Victim();
    Victim &operator=(const Victim &victim);
    virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &os, const Victim &victim);

#endif //VICTIM_HPP
