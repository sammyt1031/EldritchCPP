#include "Clue.hpp"
#include "Location.hpp"

Clue::Clue(Location& loc)
: loc_(loc)
{}

Location& Clue::getLoc(void)
{
    return this->loc_;
}

