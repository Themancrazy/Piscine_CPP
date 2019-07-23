
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Intern.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form, public Intern {
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &cpy);
        ~RobotomyRequestForm(void);

        RobotomyRequestForm          &operator=(const RobotomyRequestForm &r);
};

#endif
