// Created by Tom Jans on 10/20/20.

#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria *materia)
{
    for (int i = 0; i < 4; i++) {
        if (!storedMateria[i]) {
            storedMateria[i] = materia;
            break;
        }
    }
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for (int i = 0; i < 4; i++)
        if (storedMateria[i] && storedMateria[i]->getType() == type)
            return storedMateria[i]->clone();
    return 0;
}

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        storedMateria[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (storedMateria[i])
            delete storedMateria[i];
}

MateriaSource::MateriaSource(const MateriaSource &source)
{
    *this = source;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &source)
{
    if (this == &source)
        return *this;
    for (int i = 0; i < 4; i++) {
        if (storedMateria[i])
            delete storedMateria[i];
        if (source.storedMateria[i])
            storedMateria[i] = source.storedMateria[i]->clone();
        else
            storedMateria[i] = NULL;
    }
    return *this;
}
