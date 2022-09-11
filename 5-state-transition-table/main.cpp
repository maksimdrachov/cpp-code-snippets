#include <iostream>
#include "Light.h"

int main()
{
    Light myLight;
    std::cout << myLight.printCurrentState() << std::endl;

    myLight.toggle();
    std::cout << myLight.printCurrentState() << std::endl;

    myLight.toggle();
    std::cout << myLight.printCurrentState() << std::endl;

    myLight.toggle();
    std::cout << myLight.printCurrentState() << std::endl; 

    myLight.toggle();
    std::cout << myLight.printCurrentState() << std::endl;

    return EXIT_SUCCESS;
}