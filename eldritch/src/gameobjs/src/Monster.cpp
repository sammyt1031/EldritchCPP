#include "Monster.hpp"

Monster::Monster(const std::string& name, int health, int horror, int damage)
: Creature(name, health),
horror_(horror),
damage_(damage)
{

}

int Monster::getDamage(void) const noexcept
{
    return this->damage_;
}

void Monster::die(void)
{
    Creature::die();
}
