#pragma once
#ifndef MAP_GRAPH_HPP
#define MAP_GRAPH_HPP

#include <string>
#include <memory>
#include <map>

class Location;

class GameMap
{
    
public:
    
    explicit GameMap(void);
    
    void addLoc( std::unique_ptr<Location> loc ) noexcept;
    Location& getLocation( const std::string& id ) const;
    
private:
    
    std::map< const std::string, std::unique_ptr<Location> > map_;
    
    GameMap(const GameMap&);
    GameMap& operator=(const GameMap&);
    
};

#endif // MAP_GRAPH_HPP
