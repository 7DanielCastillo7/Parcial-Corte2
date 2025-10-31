cmake_minimum_required(VERSION 3.10)

project(DispositivoInteligente_Project CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(SOURCE_FILES
    src/DispositivoInteligente.cpp
    src/main.cpp
)


add_executable(app ${SOURCE_FILES})

target_include_directories(app PUBLIC include) 

