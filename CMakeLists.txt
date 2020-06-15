# cmake version to be used
cmake_minimum_required( VERSION 3.0 )
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# project name
project( sparkfun_vr_imu )

# flags
set(CMAKE_CXX_STANDARD_LIBRARIES -lwiringPi)
set(CMAKE_CXX_STANDARD_LIBRARIES -lpigpiod_if2)

# files

# include
include_directories( ./include ./libs/i2c/src ./libs/Sparkfun_BNO080/src )

# target
add_executable( sfimu ./src/main.cpp ./src/ArduinoPort.cpp ./src/Stream.cpp ./src/Wire.cpp )

# external libs
add_subdirectory( ./libs/i2c )
target_link_libraries( sfimu i2c )

add_subdirectory( ./libs/Sparkfun_BNO080 )
target_link_libraries( sfimu sflib )