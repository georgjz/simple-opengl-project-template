cmake_minimum_required( VERSION 3.1...3.15 )

if( ${CMAKE_VERSION} VERSION_LESS 3.12 )
    cmake_policy( VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION} )
endif()

## Get all external libraries included
## glm math lib
add_subdirectory( glm )
option( GLFW_BUILD_EXAMPLES "Build the GLFW example programs" OFF )
option( GLFW_BUILD_TESTS "Build the GLFW test programs" OFF )
option( GLFW_BUILD_DOCS "Build the GLFW documentation" OFF )
option( GLFW_INSTALL "Generate installation target" OFF )

## GLFW3
add_subdirectory( glfw )

## glad 
add_subdirectory( glad )