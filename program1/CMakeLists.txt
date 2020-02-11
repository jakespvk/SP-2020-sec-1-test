cmake_minimum_required(VERSION 3.15)
project(program1)

set(CMAKE_CXX_STANDARD 14)

add_executable(program1 main.cpp Card.cpp Card.h Deck.cpp Deck.h)