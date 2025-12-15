cmake_minimum_required(VERSION 3.10)

project(useless-free-fuck-utility
    VERSION 1.0
    LANGUAGES C
)

add_executable(fuck
    main.c
    data.c
)

target_compile_options(fuck PRIVATE
    -Wall
    -Wextra
    -O3
)