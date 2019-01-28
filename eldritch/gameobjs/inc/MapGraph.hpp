#ifndef MAP_GRAPH_HPP
#define MAP_GRAPH_HPP

class Location;
enum class PathType;

class MapGraph
{
    
public:
    
    MapGraph();
    
    void addLoc(std::shared_ptr<Location>& loc);
    std::shared_ptr<Location>& getLocation( const std::string& id ) const;
    
private:
    
    std::map< const std::string, std::shared_ptr<Location> > map;
    
}

#endif // MAP_GRAPH_HPP
