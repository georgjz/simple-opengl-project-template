#include <iostream>
#include "glm/vec3.hpp"
#include "GLFW/glfw3.h"

int main()
{
    glm::vec3 testVector = glm::vec3( 1.0f, 2.0f, 3.0f );
    std::cout << "Simple test, with glm: " << testVector.z << std::endl;
    if( !glfwInit() )
    {
        std::cout << "Init failed\n";
    }
    else
    {
        std::cout << "Init worked\n";
    }
    glfwTerminate();
    return 0;
}