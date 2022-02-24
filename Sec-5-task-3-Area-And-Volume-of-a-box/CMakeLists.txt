cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

if (MSVC)
# warning level 4
add_compile_options(/W4)
else()
# lots of warnings
add_compile_options(-Wall -Wextra -Wpedantic -Wconversion -Werror)
endif()

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
include_directories( ${CMAKE_SOURCE_DIR}/include)

# prepare Google Test
include(FetchContent)
FetchContent_Declare(
   googletest
   GIT_REPOSITORY https://github.com/google/googletest
   GIT_TAG main)
# For Windows: Prevent overriding the parent projec's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

project(area-and-volume-of-a-box)
enable_testing()

# main app target
add_executable(${PROJECT_NAME} main.cpp)

# test target
add_executable(${PROJECT_NAME}-ut utest.cpp)
target_link_libraries(${PROJECT_NAME}-ut gtest_main gmock_main)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}-ut)