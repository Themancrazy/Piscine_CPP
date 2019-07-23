#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"
#include "Intern.hpp"

class PresidentialPardonForm : public Form, public Intern {
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &cpy);
        ~PresidentialPardonForm(void);

        PresidentialPardonForm          &operator=(const PresidentialPardonForm &r);
};

#endif
