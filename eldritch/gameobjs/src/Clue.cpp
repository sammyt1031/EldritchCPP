#include "Clue.hpp"
#include "Location.hpp"

Clue::Clue(Location& loc)
: loc(loc)
{}

Location& Clue::getLoc(void)
{
    return this->loc;
}

