#pragma once
#ifndef CREATURE_HPP
#define CREATURE_HPP

#include <string>
#include <memory>

class Location;

class Creature
{

public:
    
    explicit Creature(const std::string& name, int health);
    explicit Creature(const Creature& other);
    
    void takeDamage(int damage);

    virtual void die(void) = 0;
    
private:
    
    const std::string name_;
    const int max_health_;
    
    int health_;

    std::weak_ptr<Location> loc_;

};

#endif // CREATURE_HPP
