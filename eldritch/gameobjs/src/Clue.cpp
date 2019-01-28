#include "Clue.hpp"
#include "Location.hpp"

Clue::Clue(Location& loc)
: loc(loc)
{}

Location& getLoc(void)
{
    return this->loc;
}

