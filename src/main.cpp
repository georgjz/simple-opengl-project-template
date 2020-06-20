#include <iostream>
#include "glm/vec3.hpp"

int main()
{
    glm::vec3 testVector = glm::vec3( 1.0f, 2.0f, 3.0f );
    std::cout << "Simple test, with glm: " << testVector.z
                                           << std::endl;
    return 0;
}