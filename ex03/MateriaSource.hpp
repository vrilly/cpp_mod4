// Created by Tom Jans on 10/20/20.

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP


#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    AMateria *storedMateria[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource &source);
    MateriaSource &operator=(const MateriaSource &source);
    virtual ~MateriaSource();
    void learnMateria(AMateria *materia);
    AMateria *createMateria(const std::string &type);
};


#endif //MATERIASOURCE_HPP
