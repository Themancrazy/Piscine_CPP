#include "Array.hpp"

int                 main() {
    Array<int> test;
    try {
        std::cout << test[2] << std::endl;
    }
    catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}