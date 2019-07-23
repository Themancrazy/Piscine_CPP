#include "Intern.hpp"

Intern::Intern(void) {
    return ;
}

Intern::Intern(const Intern &cpy) {
    *this = cpy;
}

Intern::~Intern(void) {
    return ;
}

Intern                  &Intern::operator=(const Intern &r) {
    return *this;
}

Form                    *Intern::makeForm(std::string name, std::string target) {
    Form *test;

    if (name == "President") {
        PresidentialPardonForm(target);
        std::cout << "Intern creates " << target << std::endl;
    }
    else if (name == "Robot") {
        RobotomyRequestForm(target);
        std::cout << "Intern creates " << target << std::endl;
    }
    else if (name == "Tree") {
        ShrubberyCreationForm(target);
        std::cout << "Intern creates " << target << std::endl;
    }
    else {
        throw std::exception();
    }
    return test;  
}