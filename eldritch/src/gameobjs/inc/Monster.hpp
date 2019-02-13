#pragma once
#ifndef MONSTER_HPP
#define MONSTER_HPP

#include <string>
#include <memory>

#include "Creature.hpp"

class Location;

class Monster : public Creature
{

public:
    
    explicit Monster(const std::string& name, int health, int horror, int damage);
    explicit Monster(const Monster& other);
    
    int getDamage(void) const noexcept;
    void setLoc(std::shared_ptr<Location>& loc) noexcept;
    
    virtual void die(void);
    
private:

    const int horror_;
    const int damage_;
    
    std::weak_ptr<Location> loc_;
    
};

#endif // MONSTER_HPP
