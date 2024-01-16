cmake_minimum_required(VERSION 3.26)
project(HelloWorldC C)

set(CMAKE_C_STANDARD 11)

add_executable(HelloWorldC
        struct/struct_test.c
        struct/struct_pointer_test.c)
