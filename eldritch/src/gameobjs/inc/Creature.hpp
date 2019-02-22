#pragma once
#ifndef CREATURE_HPP
#define CREATURE_HPP

#include <string>

class Location;

class Creature
{

public:
    
    void takeDamage(int damage);
    void setLoc(Location& loc) noexcept;
    
    virtual void die(void);

protected:

    Creature(const std::string& name, int health);
    
private:
    
    const std::string name_;
    const int max_health_;
    
    int health_;

    Location* loc_;

    Creature(const Creature& other);
    Creature& operator=(const Creature& other);
    
};

#endif // CREATURE_HPP
