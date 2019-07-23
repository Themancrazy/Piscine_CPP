#include "ScalarType.hpp"
#include <iostream>

int               main(int ac, char **av)
{
    if (ac != 2) {
        std::cout << "usage: <EXECUTABLE> <ARGUMENT>" << std::endl;
    }
    try {
        ScalarType(av[1]); 
    }
    catch (std::exception &e){
        std::cout << e.what << std::endl;
    }
    return 0;
}