#include "GameMap.hpp"

#include "Location.hpp"
#include "PathType.hpp"

GameMap::GameMap() {}

void GameMap::addLoc(std::unique_ptr<Location> loc) noexcept
{
    auto it = this->map_.find(loc->getId());
    
    if ( it != this->map_.end() )
    {
        this->map_[ loc->getId() ] = std::move(loc);
    }
}

Location& GameMap::getLocation( const std::string& id ) const
{
    return *(this->map_.at(id));
}

