cmake_minimum_required (VERSION 2.8.11)
set(CMAKE_AR x86_64-w64-mingw32-ar.exe)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static")
add_library (A STATIC basic.cpp)
add_library (B STATIC advanced.cpp)
target_link_libraries (B A)
add_executable (main main.cpp)
target_link_libraries (main B)
