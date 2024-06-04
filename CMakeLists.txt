cmake_minimum_required(VERSION 3.28)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "" FORCE)

project(Horizon)

enable_language(CXX)
enable_language(C)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 17)

add_subdirectory(Horizon)
add_subdirectory(EventHorizon)
