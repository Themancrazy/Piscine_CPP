#ifndef INTERN_HPP
#define INTERN_HPP
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
    public:
        Intern(void);
        Intern(const Intern &cpy);
        ~Intern(void);

        Intern                  &operator=(const Intern &r);

        Form                    *makeForm(std::string name, std::string target);
};

#endif