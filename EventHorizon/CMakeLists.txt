
add_executable(EventHorizon
    src/EventHorizon.cpp
)

target_include_directories(EventHorizon
PRIVATE
    src
)

target_link_libraries(EventHorizon
PRIVATE
    Horizon    
)
