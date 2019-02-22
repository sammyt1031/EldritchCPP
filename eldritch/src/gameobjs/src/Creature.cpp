#include "Creature.hpp"

#include <cassert>

Creature::Creature(const std::string& name, int health)
: 
name_(name),
max_health_(health),
loc_(nullptr)
{
    this->health_ = this->max_health_;
}

void Creature::takeDamage(int damage)
{   
    assert(damage > 0);
    
    this->health_ -= damage;
    
    if (this->health_ <= 0)
    {
        this->die();
    }
}

void Creature::setLoc(Location& loc) noexcept
{
    this->loc_ = &loc;
}

void Creature::die(void)
{
    this->loc_ = nullptr;
}
