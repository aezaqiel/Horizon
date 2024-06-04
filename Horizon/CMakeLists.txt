
add_library(Horizon
    src/Horizon/Horizon.hpp
    src/Horizon/Core/Application.hpp
    src/Horizon/Core/Application.cpp
)

target_include_directories(Horizon
PUBLIC
    src
)

target_link_libraries(Horizon
PUBLIC
)

target_compile_definitions(Horizon
PRIVATE
)

target_precompile_headers(Horizon
PUBLIC
    src/hpch.hpp
)
