cmake_minimum_required(VERSION 3.22.0)

project(RaceLib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(

    sources/vehicles
    sources/vehicles/air
    sources/vehicles/ground
)

add_library(RaceLib SHARED

    sources/vehicles/all_vehicles.h
    sources/vehicles/vehicle.h
    sources/vehicles/settings.h
    sources/vehicles/settings.cpp

    sources/vehicles/air/airvehicle.h

    sources/vehicles/air/magiccarpet.h
    sources/vehicles/air/magiccarpet.cpp
    sources/vehicles/air/eagle.h
    sources/vehicles/air/eagle.cpp
    sources/vehicles/air/broom.h
    sources/vehicles/air/broom.cpp

    sources/vehicles/ground/groundvehicle.h

    sources/vehicles/ground/camel.h
    sources/vehicles/ground/camel.cpp
    sources/vehicles/ground/camelrunner.h
    sources/vehicles/ground/camelrunner.cpp
    sources/vehicles/ground/centaur.h
    sources/vehicles/ground/centaur.cpp
    sources/vehicles/ground/allterrainboots.h
    sources/vehicles/ground/allterrainboots.cpp

    sources/logic/game.h
    sources/logic/game.cpp
    sources/logic/results.h
    sources/logic/results.cpp
)
