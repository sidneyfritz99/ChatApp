cmake_minimum_required(VERSION 3.13)
project(cpp_chat_client)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_chat_client
        Application.cpp
        Application.h
        CircularLineBuffer.cpp
        CircularLineBuffer.h
        Client.cpp
        Client.h
        main.cpp
        vusocket.cpp
        vusocket.h)
