#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form {
    public:
        Form(void);
        Form(std::string name, int gradeSign, int gardeExec);
        Form(const Form &cpy);
        ~Form(void);

        Form            &operator=(const Form &r);
        
        struct GradeTooHighException : public std::exception
        {
            const char * what (void) const throw ()
            {
                return ("Person's grade is too high too sign this.");
            }
        };
        struct GradeTooLowException : public std::exception
        {
            const char * what (void) const throw ()
            {
                return ("Person's grade is too low to sign this.");
            }
        };

        std::string                 getName(void) const;
        int                         getGradeS(void) const;
        int                         getGradeE(void) const;
        bool                        getSigned(void) const;

       
        void            beSigned(const Bureaucrat &agent);
        virtual void    execute(Bureaucrat const &executor);

    private:
        std::string               _name;
        bool                      _signed;
        int                       _gradeSign;
        int                       _gradeExec;
};

std::ostream            &operator<<(std::ostream &o, const Form &r);

#endif