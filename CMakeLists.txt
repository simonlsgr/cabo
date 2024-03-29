cmake_minimum_required(VERSION 3.27)
project(cabo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cabo
        main.cpp
        Player.cpp
        Player.h
        Card.cpp
        Card.h
        Deck.cpp
        Deck.h)
