
cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(starwars_clonewars_vulkan)

set(SOURCE_LIST
    main.c pcdump_c_object_file.c
)

add_library(${PROJECT_NAME} SHARED ${SOURCE_LIST})
