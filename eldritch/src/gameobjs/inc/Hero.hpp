#pragma once
#ifndef HERO_HPP
#define HERO_HPP

#include <string>

#include "Creature.hpp"

class Location;

class Hero : public Creature
{

public:
    
    explicit Hero(const std::string& name, int health, int sanity, int lore, int inf, int obs, int strength, int will);
    
    int getLore(void) const noexcept;
    int getInf(void) const noexcept;
    int getObs(void) const noexcept;
    int getStr(void) const noexcept;
    int getWill(void) const noexcept;
    
    int impLore(void) noexcept;
    int impInf(void) noexcept;
    int impObs(void) noexcept;
    int impStr(void) noexcept;
    int impWill(void) noexcept;
    
    void goInsane(void);
    virtual void die(void);
    
private:
    
    const int max_sanity_;
    const int start_lore_;
    const int start_inf_;
    const int start_obs_;
    const int start_str_;
    const int start_will_;
    
    int sanity_;
    int lore_mod_;
    int inf_mod_;
    int obs_mod_;
    int str_mod_;
    int will_mod_;
    
    Hero(const Hero&);
    Hero& operator=(const Hero&);
    
};

#endif // HERO_HPP
