// Created by Tom Jans on 10/21/20.

#ifndef EMERGENCYMEETING_HPP
#define EMERGENCYMEETING_HPP


#include "AWeapon.hpp"

class EmergencyMeeting: public AWeapon
{
    virtual void attack() const;
public:
    EmergencyMeeting();
    virtual ~EmergencyMeeting();
    EmergencyMeeting(const EmergencyMeeting &meeting);
    EmergencyMeeting &operator= (const EmergencyMeeting &meeting);
};


#endif //EMERGENCYMEETING_HPP
