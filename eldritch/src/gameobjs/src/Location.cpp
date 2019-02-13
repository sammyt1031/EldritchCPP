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

const std::string& Location::getId(void) const noexcept
{ 
    return this->id_; 
}

LocationType Location::getType(void) const noexcept
{ 
    return this->type_; 
}

void Location::addPath( std::unique_ptr<Path> path )
{
    this->paths_.push_back(std::move(path));
}

void Location::setClue( Clue& clue )
{ 
    this->clue_ = &clue;
}

Clue* Location::takeClue(void)
{
    return this->clue_;
}
