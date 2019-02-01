#pragma once
#ifndef LOCATION_HPP
#define LOCATION_HPP

#include <string>
#include <memory>
#include <vector>

class Path;
class Clue;
enum class LocationType;

class Location
{

public:
    
    explicit Location(const std::string& id, LocationType type);
    virtual ~Location(void);
    
    const std::string& getId(void) const;
    LocationType getType(void) const;
    void addPath(std::shared_ptr<Path>& path);
	void setClue(std::unique_ptr<Clue>& clue);
    
private:
    
    const std::string id_;
    const LocationType type_;
    
    std::vector< std::shared_ptr<Path> > paths;
    //std::vector< std::unique_ptr<Hero> > heroes;
    //std::vector< std::unique_ptr<Monster> > monsters;
    std::unique_ptr<Clue> clue_;
    
    Location(const Location& other);
    
};

#endif // LOCATION_HPP
