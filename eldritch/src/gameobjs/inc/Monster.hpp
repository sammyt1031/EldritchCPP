#pragma once
#ifndef MONSTER_HPP
#define MONSTER_HPP

#include <string>

#include "Creature.hpp"

class Location;

class Monster : public Creature
{

public:
    
    explicit Monster(const std::string& name, int health, int horror, int damage);
    
    int getDamage(void) const noexcept;
    
    virtual void die(void);
    
private:

    const int horror_;
    const int damage_;
    
    Monster(const Monster& other);
    Monster& operator=(const Monster& other);
    
};

#endif // MONSTER_HPP
