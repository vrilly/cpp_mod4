// Created by Tom Jans on 10/21/20.

#include <iostream>
#include "EmergencyMeeting.hpp"

void EmergencyMeeting::attack() const
{
    std::cout << "Emergency meeting called!" << std::endl;
}

EmergencyMeeting::EmergencyMeeting()
    : AWeapon("Emergency Meeting", 40, 9001)
{
}

EmergencyMeeting::EmergencyMeeting(const EmergencyMeeting &meeting)
{
    *this = meeting;
}

EmergencyMeeting &EmergencyMeeting::operator=(const EmergencyMeeting &meeting)
{
    return *this;
}
