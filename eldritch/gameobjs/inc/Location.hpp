#ifndef LOCATION_HPP
#define LOCATION_HPP

#include <vector>

class Path;
//class Monster;
class Clue;
enum class LocationType;

class Location
{

public:
    
    explicit Location( const std::string& id, LocationType type );
    const std::string& getId(void) const;
    LocationType getType(void) const;
    void addPath(std::shared_path<Path>& path);
    
private:
    
    const std::string id_;
    const LocationType type_;
    
    std::vector< const std::shared_path<Path> > paths;
    //std::vector< std::unique_ptr<Hero> > heroes;
    //std::vector< std::unique_ptr<Monster> > monsters;
    std::unique_ptr<Clue> clue_;
    
    Location(const Location& other);
    
};

#endif // LOCATION_HPP
