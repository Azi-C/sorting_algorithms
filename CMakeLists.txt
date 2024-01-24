cmake_minimum_required(VERSION 3.27)
project(sorting_algorithms C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(sorting_algorithms
        print_array.c
        print_list.c
        sort.h
        0-bubble_sort.c
        tests/0-main.c
        1-insertion_sort_list.c
        tests/1-main.c
        2-selection_sort.c
        tests/2-main.c
        106-bitonic_sort.c)
