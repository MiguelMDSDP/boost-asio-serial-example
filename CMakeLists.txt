cmake_minimum_required(VERSION 3.10)
project(furgbol)

find_package(Boost COMPONENTS system REQUIRED)

include_directories("include" ${Boost_INCLUDE_DIRS})

add_library(serial SHARED "src/serial_test.cc")

add_executable(testing "src/main.cpp")
target_link_libraries(testing serial ${Boost_LIBRARIES})