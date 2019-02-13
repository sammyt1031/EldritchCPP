#include "Hero.hpp"

Hero::Hero(const std::string& name, int health, int sanity, int lore, int inf, int obs, int strength, int will)
: Creature(name, health),
max_sanity_(sanity),
start_lore_(lore),
start_inf_(inf),
start_obs_(obs),
start_str_(strength),
start_will_(will),
loc_()
{
    this->sanity_ = this->max_sanity_;
    this->lore_mod_ = 0;
    this->inf_mod_ = 0;
    this->obs_mod_ = 0;
    this->str_mod_ = 0;
    this->will_mod_ = 0;
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

void Hero::goInsane(void)
{

}

void Hero::die(void)
{

}

