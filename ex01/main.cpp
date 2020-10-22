// Created by Tom Jans on 01-10-20.

#include <iostream>
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Imposter.hpp"
#include "EmergencyMeeting.hpp"
#include "SuperMutant.hpp"

int main()
{
    Character *active = new Character("Bob");
    Character *backup = new Character("that one guy");

    std::cout << *active;

    Enemy *radscorpion = new RadScorpion;
    Enemy *supermutant = new SuperMutant;
    Enemy *imposter = new Imposter;

    AWeapon *plasmarifle = new PlasmaRifle;
    AWeapon *powerfist = new PowerFist;
    AWeapon *emergencymeeting = new EmergencyMeeting;

    active->attack(radscorpion);
    std::cout << *active << std::endl;
    active->equip(powerfist);
    std::cout << *active << std::endl;
    active->attack(imposter);
    std::cout << *active << std::endl;
    active->attack(radscorpion);
    std::cout << *active << std::endl;
    active->equip(plasmarifle);
    std::cout << *active << std::endl;
    active->attack(supermutant);
    std::cout << *active << std::endl;
    active->equip(emergencymeeting);
    std::cout << *active << std::endl;
    active->attack(imposter);
    std::cout << *active << std::endl;

    active = backup;
    std::cout << *active << std::endl;
    active->equip(emergencymeeting);
    active->attack(imposter);
    std::cout << *active << std::endl;
    active->recoverAP();
    std::cout << *active << std::endl;
    return (0);
}
