#include "Creature.hpp"

Creature::Creature(const std::string& name, int health)
: name_(name),
max_health_(health)
{
    this->health_ = this->max_health_;
}

Creature::Creature(const Creature& other)
: name_(other.name_),
max_health_(other.max_health_)
{
    this->health_ = this->max_health_;
}

void Creature::takeDamage(int damage)
{
    this->health_ -= damage;
    
    if (this->health_ <= 0)
    {
        this->die();
    }
}
