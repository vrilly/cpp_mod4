// Created by Tom Jans on 24-08-20.
#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
    std::string name;
    std::string title;
protected:
    Sorcerer()
    {};
public:
    const std::string &getName() const;
    const std::string &getTitle() const;
    Sorcerer(const Sorcerer &sorcerer);
    Sorcerer(const std::string &name, const std::string &title);
    ~Sorcerer();
    Sorcerer &operator=(const Sorcerer &sorcerer);
    void polymorph(Victim const &victim);
};

std::ostream &operator<<(std::ostream &os, const Sorcerer &sorcerer);

#endif //SORCERER_HPP
