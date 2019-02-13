cmake_minimum_required (VERSION 3.7.2)
project (Eldritch)

set (Eldritch_VERSION_MAJOR 1)
set (Eldritch_VERSION_MINOR 0)

include_directories("${PROJECT_SOURCE_DIR}/gameobjs/inc")
add_subdirectory(app)
add_subdirectory(gameobjs)

add_executable(Eldritch app)
target_link_libraries(Eldritch app gameobjs)

