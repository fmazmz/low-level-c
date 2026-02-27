cmake_minimum_required(VERSION 4.1)
project(low_level_c C)

set(CMAKE_C_STANDARD 11)

add_executable(low_level_c
        src/pointers/mem_audit.c
        src/basics/boot_sequence.c
        src/main.c
        src/basics/boot_sequence.h
        src/files/write_to_file.c
        src/files/write_to_file.h
)
