cmake_minimum_required(VERSION 3.13)
project(Lifegame VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Lifegame src/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_subdirectory(src)
