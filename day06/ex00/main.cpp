#include "ScalarType.hpp"
#include <iostream>
#include <iomanip>

int               main(int ac, char **av)
{
    (void)av;
    if (ac != 2) {
        std::cout << "usage: ./convert <literal-value>" << std::endl;
        return 0;
    }
    ScalarType conv(av[1]);
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << "char: ";
    try {
        char c = static_cast<char>(conv);
        if (isprint(c)) {
            std::cout << "'" << c << "'" << std::endl;
        } else {
            std::cout << "Non displayable" << std::endl;
        }
    } catch (ScalarType::FailedConvertion &e) {
        std::cout << e.what() << std::endl;
    }catch (std::exception) {
        std::cout << "Weird" << std::endl;
    }

    std::cout << "int: ";
    try {
        int c = static_cast<int>(conv);
        std::cout << c << std::endl;
    } catch (ScalarType::FailedConvertion &e) {
        std::cout << e.what() << std::endl;
    }catch (std::exception) {
        std::cout << "Weird" << std::endl;
    }

    std::cout << "float: ";
    try {
        float c = static_cast<float>(conv);
        std::cout << c <<  "f" << std::endl;
    } catch (ScalarType::FailedConvertion &e) {
        std::cout << e.what() << std::endl;
    } catch (std::exception) {
        std::cout << "Weird" << std::endl;
    }

    std::cout << "double: ";
    try {
        double c = static_cast<double>(conv);
        std::cout << c << std::endl;
    } catch (ScalarType::FailedConvertion &e) {
        std::cout << e.what() << std::endl;
    }catch (std::exception) {
        std::cout << "Weird" << std::endl;
    }
    return 0;
}