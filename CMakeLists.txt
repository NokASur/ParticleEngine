cmake_minimum_required(VERSION 3.28)

project(ParticleEngine)

set(CMAKE_CXX_STANDARD 20)


set(SFML_LIB_DIR "${CMAKE_SOURCE_DIR}/lib")
set(SFML_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")


include_directories(${SFML_INCLUDE_DIR})
link_directories(${SFML_LIB_DIR})


add_executable(ParticleEngine main.cpp
        physical_entities/PhysicalEntity.cpp
        physical_entities/PhysicalEntity.h
        physical_entities/Circle.cpp
        physical_entities/Circle.h
        CollisionHandler.cpp
        CollisionHandler.h
        physical_entities/Rectangle.cpp
        physical_entities/Rectangle.h
        GravitySystem.cpp
        GravitySystem.h)


target_compile_definitions(ParticleEngine PRIVATE SFML_STATIC)



target_link_libraries(ParticleEngine
        sfml-graphics
        sfml-window
        sfml-system

)
