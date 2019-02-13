#pragma once
#ifndef PATH_HPP
#define PATH_HPP

#include <utility>

class Location;
enum class PathType;

typedef std::pair<const PathType, Location&> Path;

#endif // PATH_HPP
