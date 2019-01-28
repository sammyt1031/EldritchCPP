#include "Location.hpp"
#include "LocationType.hpp"
#include "MapGraph.hpp"

#include <iostream>

int main() 
{
    
    
    auto loc(std::make_shared<Location>( "Shanghai", LocationType.CITY ));
    auto mapgraph = MapGraph();
    mapgraph.addLoc(loc);
    
    std::cout << "Number of shared pointers: " << loc.use_count() << std::endl;
    
  
}


