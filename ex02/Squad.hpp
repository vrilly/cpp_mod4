// Created by Tom Jans on 06-10-20.
#ifndef SQUAD_HPP
#define SQUAD_HPP


#include "ISquad.hpp"

class Squad: public ISquad
{
    struct SquadList
    {
        SquadList(ISpaceMarine *unit);
        ISpaceMarine *unit;
        SquadList *next;
    };
    SquadList *units;
    int unit_count;
    void destroyUnits();
public:
    virtual int getCount() const;
    virtual ISpaceMarine *getUnit(int i) const;
    virtual int push(ISpaceMarine *marine);
    Squad();
    Squad(const Squad &squad);
    Squad &operator=(const Squad &squad);
    ~Squad();
};


#endif //SQUAD_HPP
