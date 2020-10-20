// Created by Tom Jans on 06-10-20.
#include <clocale>
#include "Squad.hpp"

int Squad::getCount() const
{
    return unit_count;
}

ISpaceMarine *Squad::getUnit(int i) const
{
    SquadList *unit = units;
    if (!unit)
        return NULL;
    while (i--)
        if (unit->next)
            unit = unit->next;
        else
            return (NULL);
    return unit->unit;
}

int Squad::push(ISpaceMarine *marine)
{
    SquadList *unit = units;
    if (!unit)
        units = new SquadList(marine);
    else {
        while (unit->next)
            unit = unit->next;
        unit->next = new SquadList(marine);
    }
    unit_count++;
    return unit_count;
}

Squad::~Squad()
{
    destroyUnits();
}

void Squad::destroyUnits()
{
    SquadList *unit = units;
    SquadList *prevunit;
    if (!unit)
        return;
    while (unit->next) {
        prevunit = unit;
        unit = unit->next;
        delete prevunit->unit;
        delete prevunit;
    }
    delete unit->unit;
    delete unit;
    units = NULL;
}

Squad::Squad()
    : units(NULL), unit_count(0)
{}

Squad::SquadList::SquadList(ISpaceMarine *unit)
    : unit(unit), next(NULL)
{}

Squad::Squad(const Squad &squad)
    : units(NULL), unit_count(0)
{
    *this = squad;
}

Squad &Squad::operator=(const Squad &squad)
{
    if (this == &squad)
        return *this;
    if (this->units)
        destroyUnits();
    SquadList *iterator_src, *iterator_dst;
    if (squad.units) {
        SquadList *list = new SquadList(squad.units->unit->clone());
        iterator_dst = list;
        iterator_src = squad.units->next;
        while (iterator_src) {
            iterator_dst->next = new SquadList(iterator_src->unit->clone());
            iterator_dst = iterator_dst->next;
            iterator_src = iterator_src->next;
        }
        this->units = list;
        this->unit_count = squad.unit_count;
    }
    else
        this->units = NULL;
    return *this;
}
