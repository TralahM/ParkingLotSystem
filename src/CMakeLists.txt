cmake_minimum_required(VERSION 3.10)
project(ParkingLotSystem)

# find_package(library)

# include_directories(${library_INCLUDE_DIRS})

# add_subdirectory(src)
add_library(vehicles vehicle.cpp)
add_library(parking spot.cpp parkinglot.cpp)

add_executable(testvehiclelibrary testvehiclelib.cpp)

target_link_libraries(testvehiclelibrary vehicles)

# target_link_libraries( ${library_LIBRARIES})

