#include "MapGraph.hpp"

#include "Location.hpp"
#include "PathType.hpp"

#include <stdexcept>
#include <cstdio>

MapGraph::MapGraph() {}

void MapGraph::addLoc(std::shared_ptr<Location>& loc)
{
    this->map[loc->getId()] = loc;
}

std::shared_ptr<Location>& MapGraph::getLocation( const std::string& id ) const 
{
    return this->map[id];
}

