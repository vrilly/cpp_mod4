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
    Hooman nothuman("Disguised Alien");

    std::cout << robert << jim << joe << human;

    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(human);

    std::cout << "Assignment test" << std::endl;
    std::cout << human << nothuman;
    human = nothuman;
    std::cout << human << nothuman;
    return 0;
}
