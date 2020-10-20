// Created by Tom Jans on 01-10-20.
#include "Enemy.hpp"

Enemy::Enemy(const Enemy &enemy)
{
    *this = enemy;
}

Enemy::Enemy(int hp, const std::string &type)
    : hp(hp), type(type)
{
}

Enemy::~Enemy()
{
}

Enemy &Enemy::operator=(const Enemy &enemy)
{
    hp = enemy.getHP();
    type = enemy.getType();
    return *this;
}

std::string Enemy::getType() const
{
    return type;
}

int Enemy::getHP() const
{
    return hp;
}

void Enemy::takeDamage(int damage)
{
    if (damage < 0)
        return;
    if (hp < damage)
        hp = 0;
    hp -= damage;
}
