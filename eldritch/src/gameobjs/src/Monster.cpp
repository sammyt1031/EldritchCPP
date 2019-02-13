#include "Monster.hpp"

Monster::Monster(const std::string& name, int health, int horror, int damage)
: Creature(name, health),
horror_(horror),
damage_(damage),
loc_()
{

}

Monster::Monster(const Monster& other)
: Creature(other),
horror_(other.horror_),
damage_(other.damage_),
loc_(other.loc_)
{

}

int Monster::getDamage(void) const noexcept
{
    return this->damage_;
}

void Monster::setLoc(std::shared_ptr<Location>& loc) noexcept
{
    this->loc_ = loc;
}

void Monster::die(void)
{

}
