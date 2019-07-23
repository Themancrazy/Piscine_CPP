
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
        ~ShrubberyCreationForm(void);

        ShrubberyCreationForm          &operator=(const ShrubberyCreationForm &r);
};

#endif
