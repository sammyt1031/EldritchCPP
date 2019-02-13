#pragma once
#ifndef LOCATION_HPP
#define LOCATION_HPP

#include <string>
#include <memory>
#include <vector>

#include "Path.hpp"

class Clue;
class Hero;
class Monster;
enum class LocationType;

class Location
{

public:
    
    explicit Location(const std::string& id, LocationType type);
    virtual ~Location(void);
    
    const std::string& getId(void) const noexcept;
    LocationType getType(void) const noexcept;
    void addPath(std::unique_ptr<Path> path);
	void setClue(Clue& clue);
	Clue* takeClue(void);
    
private:
    
    const std::string id_;
    const LocationType type_;
    
    std::vector< std::unique_ptr<Path> > paths_;
    std::vector< Hero* > heroes;
    std::vector< Monster* > monsters;
    Clue* clue_;
    
    Location(const Location&);
    Location& operator=(const Location&);
    
};

#endif // LOCATION_HPP
