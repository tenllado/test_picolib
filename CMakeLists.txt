cmake_minimum_required(VERSION 3.20.0)

set( CMAKE_EXPORT_COMPILE_COMMANDS ON )

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(picotest)

target_sources(app PRIVATE src/main.c)


