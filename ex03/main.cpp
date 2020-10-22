// Created by Tom Jans on 10/20/20.

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice);
    src->learnMateria(new Cure);
    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter *bob = new Character("bob");
    bob->equip(src->createMateria("cure"));
    me->use(0, *bob);
    me->use(1, *bob);
    ICharacter *notbob = new Character(*(Character*)me);
    *(Character *)notbob = *(Character *)bob; // deep copy
    delete bob;
    notbob->use(0, *me);
    IMateriaSource *src_copy = new MateriaSource();
    *(MateriaSource *)src_copy = *(MateriaSource *)src; // deep copy
    delete notbob;

    notbob = new Character("Not Bob");
    notbob->equip(src_copy->createMateria("ice"));
    notbob->use(0, *me);
    notbob->use(1, *me);

    notbob->unequip(0);
    notbob->use(0, *me);

    delete notbob;
    delete me;
    delete src;
    return 0;
}