#include "Bureaucrat.hpp"
#include "Form.hpp"

int            main(void) {
    try {
        Bureaucrat fbiAgent("Agent Nico", 6);
        Form contract("Nuclear code", 5, 10);
        fbiAgent.increment(5);
        std::cout << fbiAgent;
        fbiAgent.signForm(contract);
        fbiAgent.decrement(100);
        fbiAgent.signForm(contract);
        contract.setForm("Robot");
        fbiAgent.executeForm(contract);
        fbiAgent.increment(100);
        fbiAgent.executeForm(contract);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;    
    }
    return 0;
}