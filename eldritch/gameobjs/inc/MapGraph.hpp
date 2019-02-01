#pragma once
#ifndef MAP_GRAPH_HPP
#define MAP_GRAPH_HPP

#include <string>
#include <memory>
#include <map>

class Location;
enum class PathType;

class MapGraph
{
    
public:
    
    explicit MapGraph();
    
    void addLoc(std::shared_ptr<Location>& loc);
    std::shared_ptr<Location>& getLocation( const std::string& id );
    
private:
    
    std::map< const std::string, std::shared_ptr<Location> > map_;
    
};

#endif // MAP_GRAPH_HPP
