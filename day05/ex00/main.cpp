#include "Bureaucrat.hpp"

int            main(void) {
    
    try {
        Bureaucrat fbiAgent("Agent Nico", 6);
        fbiAgent.increment(5);
        std::cout << fbiAgent;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;    
    }
    return 0;
}