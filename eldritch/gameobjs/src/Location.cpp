#include "Location.hpp"
#include "LocationType.hpp"
#include "Clue.hpp"

Location::Location( const std::string& id, LocationType type )
: 
    id_(id),
    type_(type),
    clue_(nullptr)
{}

Location::~Location(void) = default;

void Location::setClue( std::unique_ptr<Clue>& clue )
{ 
    this->clue_ = std::move(clue);
}

const std::string& Location::getId(void) const
{ 
    return this->id_; 
}

LocationType Location::getType(void) const
{ 
    return this->type_; 
}

void Location::addPath(std::shared_ptr<Path>& path)
{
    this->paths.push_back(path);
}
