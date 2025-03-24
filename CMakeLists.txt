cmake_minimum_required(VERSION 3.20)

project("simple_cpp_library")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Library

find_package(Boost REQUIRED)

add_library(${PROJECT_NAME} SHARED src/simple_cpp_library.cpp include/simple_cpp_library.hpp)
target_compile_definitions(${PROJECT_NAME} PRIVATE SIMPLE_CPP_LIBRARY_EXPORTS)
target_include_directories(${PROJECT_NAME} PUBLIC "include" PRIVATE ${Boost_INCLUDE_DIRS})

# Tests

find_package(GTest REQUIRED)

add_executable(${PROJECT_NAME}_tests tests/simple_cpp_library_tests.cpp)
target_include_directories(${PROJECT_NAME}_tests PRIVATE "include")
target_link_libraries(${PROJECT_NAME}_tests PRIVATE GTest::GTest GTest::Main ${PROJECT_NAME})

# Install

install(TARGETS ${PROJECT_NAME} ${PROJECT_NAME}_tests
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        RUNTIME DESTINATION bin)

install(FILES include/simple_cpp_library.hpp DESTINATION include)
