#include "Path.hpp"
#include "Location.hpp"
#include "PathType.hpp"
    
Path::Path( std::shared_ptr<Location>& loc1, std::shared_ptr<Location>& loc2, PathType type)
: 
locs_{ loc1, loc2 },
type_(type)
{}

std::shared_ptr<Location> Path::getDest( std::shared_ptr<Location>& from ) const
{
    if (this->locs_[0].lock() == from)
    {
        return this->locs_[1].lock();
    } else if (this->locs_[1].lock() == from)
    {
        return this->locs_[0].lock();
    }
    
    throw std::out_of_range("Location " + from->getId() + " is not on this path");
}

PathType Path::getPathType(void) const noexcept
{
    return this->type_;
}

