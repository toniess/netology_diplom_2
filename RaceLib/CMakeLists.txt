cmake_minimum_required(VERSION 3.22.0)

project(RaceLib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(RaceLib SHARED
    sources/vehicles/vehicle.h
    sources/vehicles/airvehicle.h
    sources/vehicles/groundvehicle.h

    sources/vehicles/ground/camel.h
    sources/vehicles/ground/camel.cpp

    sources/vehicles/ground/camelrunner.h
    sources/vehicles/ground/camelrunner.cpp

    sources/vehicles/ground/centaur.h
    sources/vehicles/ground/centaur.cpp

    sources/vehicles/ground/allterrainboots.h
    sources/vehicles/ground/allterrainboots.cpp

)
