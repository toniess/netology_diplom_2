cmake_minimum_required(VERSION 3.22.0)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

project(RaceSimulator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(RaceLib/sources/)
include_directories(RaceLib/sources/vehicles)
include_directories(RaceLib/sources/vehicles/air)
include_directories(RaceLib/sources/vehicles/ground)


add_subdirectory(RaceLib)

add_executable(RaceSimulator sources/main.cpp)
target_link_libraries(RaceSimulator RaceLib)
