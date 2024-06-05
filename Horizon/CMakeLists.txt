add_subdirectory(vendor/spdlog)

add_library(Horizon
    src/Horizon/Horizon.hpp
    src/Horizon/Core/Application.hpp
    src/Horizon/Core/Application.cpp
    src/Horizon/Core/Logger.hpp
    src/Horizon/Core/Logger.cpp
)

target_include_directories(Horizon
PUBLIC
    src
)

target_link_libraries(Horizon
PUBLIC
    spdlog
)

target_compile_definitions(Horizon
PRIVATE
)

target_precompile_headers(Horizon
PUBLIC
    src/hpch.hpp
)
