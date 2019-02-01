#ifndef PATH_HPP
#define PATH_HPP

#include <memory>
#include <array>

class Location;
enum class PathType;

class Path
{

public:
    
    explicit Path( std::shared_ptr<Location>& loc1, std::shared_ptr<Location>& loc2, PathType type);
    std::shared_ptr<Location> getDest( std::shared_ptr<Location>& source_loc ) const;
    PathType getPathType(void) const noexcept;
    
private:
    
    const std::array< std::weak_ptr<Location>, 2 > locs_;
    const PathType type_;
    
    Path(const Path& other);

};

#endif // PATH_HPP
