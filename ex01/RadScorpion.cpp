// Created by Tom Jans on 01-10-20.
#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
    : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}
