cmake_minimum_required( VERSION 3.1...3.15 )

if( ${CMAKE_VERSION} VERSION_LESS 3.12 )
    cmake_policy( VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION} )
endif()

project( opengltemplate VERSION 0.1
                        DESCRIPTION "A simple self-contained OpenGL project Template"
                        LANGUAGES CXX )

add_subdirectory( extern )

add_executable( ${PROJECT_NAME} "" )
add_subdirectory( src )
target_include_directories( ${PROJECT_NAME} PUBLIC "include" )
target_link_libraries( ${PROJECT_NAME} glfw glad glm )