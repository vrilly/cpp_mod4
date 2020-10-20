// Created by Tom Jans on 01-10-20.
#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>

class Enemy
{
    int hp;
    std::string type;
protected:
    Enemy()
    {};
public:
    Enemy(const Enemy &enemy);
    Enemy(int hp, const std::string &type);
    virtual ~Enemy();
    Enemy &operator=(const Enemy &enemy);
    std::string getType() const;
    int getHP() const;
    virtual void takeDamage(int damage);
};


#endif //ENEMY_HPP
