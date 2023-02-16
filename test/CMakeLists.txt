cmake_minimum_required(VERSION 3.5)

project(test_print_array)

add_subdirectory("lib")
file(GLOB
	print_source "../*.cpp"
	userin_source "lib/userin/*.cpp")

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(print_lib STATIC ${print_source} ${userin_source})

add_executable(${PROJECT_NAME}.exe main.cpp ${print_source} ${userin_source})

target_link_libraries(${PROJECT_NAME}.exe print_lib) 
