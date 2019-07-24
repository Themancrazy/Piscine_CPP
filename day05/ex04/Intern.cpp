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

Intern					&Intern::operator=(const Intern &r) {
	(void)r;
	return *this;
}

Form                    *Intern::makeForm(std::string name, std::string target) {
    Form *test;
	try {
    if (name == "President") {
        std::cout << "Intern creates " << target << std::endl;
        test = new PresidentialPardonForm(target);
    }
    else if (name == "Robot") {
        std::cout << "Intern creates " << target << std::endl;
        test = new RobotomyRequestForm(target);
    }
    else if (name == "Tree") {
        std::cout << "Intern creates " << target << std::endl;
        test = new ShrubberyCreationForm(target);
    }
    else {
        throw std::exception();;
    }
	}
	catch (std::exception &e) {
		std::cout << "Invalid Format name." << std::endl;
	}
	return test;
}
