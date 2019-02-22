#include "Hero.hpp"

namespace
{
    int MAX_SKILL_IMP = 2;
    
    int impSkill(int mod_val) noexcept
    {
        if (mod_val == MAX_SKILL_IMP)
        {
            return mod_val + 1;
        } 
        else
        {
            return mod_val;
        }
    }
}

Hero::Hero(const std::string& name, int health, int sanity, int lore, int inf, int obs, int strength, int will)
: Creature(name, health),
max_sanity_(sanity),
start_lore_(lore),
start_inf_(inf),
start_obs_(obs),
start_str_(strength),
start_will_(will),
lore_mod_(0),
inf_mod_(0),
obs_mod_(0),
str_mod_(0),
will_mod_(0)
{
    this->sanity_ = this->max_sanity_;
}

int Hero::getLore(void) const noexcept
{
    return this->start_lore_ + this->lore_mod_;
}

int Hero::getInf(void) const noexcept
{
    return this->start_inf_ + this->inf_mod_;
}

int Hero::getObs(void) const noexcept
{
    return this->start_obs_ + this->obs_mod_;
}

int Hero::getStr(void) const noexcept
{
    return this->start_str_ + this->str_mod_;
}

int Hero::getWill(void) const noexcept
{
    return this->start_will_ + this->will_mod_;
}

int Hero::impLore(void) noexcept
{
    this->lore_mod_ = ::impSkill(this->lore_mod_);
}

int Hero::impInf(void) noexcept
{
    this->inf_mod_ = ::impSkill(this->inf_mod_);
}

int Hero::impObs(void) noexcept
{
    this->obs_mod_ = ::impSkill(this->obs_mod_);
}

int Hero::impStr(void) noexcept
{
    this->str_mod_ = ::impSkill(this->str_mod_);
}

int Hero::impWill(void) noexcept
{
    this->will_mod_ = ::impSkill(this->will_mod_);
}

void Hero::goInsane(void)
{

}

void Hero::die(void)
{
    Creature::die();
}

