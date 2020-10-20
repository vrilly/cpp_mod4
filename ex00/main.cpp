// Created by Tom Jans on 24-08-20.

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Hooman.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Hooman human("Bob");

    std::cout << robert << jim << joe << human;

    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(human);
    return 0;
}
