#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP
#include <iostream>
#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

class OfficeBlock {
    public:
        OfficeBlock(void);
        OfficeBlock(Intern &Intern, )
        OfficeBlock(const OfficeBlock &cpy);
        ~OfficeBlock(void);

        OfficeBlock                  &operator=(const OfficeBlock &r);



        Bureaucrat                  setSigner(Bureaucrat &agent);
        Bureaucrat                  setExecutor(Bureaucrat &agent);
        Intern                      setIntern(Bureaucrat &agent);
};

#endif