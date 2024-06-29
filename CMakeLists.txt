cmake_minimum_required(VERSION 3.10)
project(simDB C)
add_executable(SimDB src/main.c src/input.c)
set_target_properties(SimDB PROPERTIES 
    OUTPUT_NAME "simdb"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin"
    )
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")