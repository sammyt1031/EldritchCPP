#include "Location.hpp"
#include "LocationType.hpp"
#include "Path.hpp"
#include "PathType.hpp"

#include <iostream>

int main() 
{
    
    auto loc(std::make_unique<Location>( "Shanghai", LocationType::CITY ));
    auto loc2(std::make_unique<Location>( "Fake", LocationType::SEA ));
    loc->addPath( std::make_unique<Path>( PathType::BOAT, *(loc2.get()) ) );
    
}


