#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include "Form.hpp"
#include <iostream>
#include <exception>

class Form; 

class Bureaucrat {
    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &cpy);
        ~Bureaucrat(void);

        Bureaucrat                  &operator=(const Bureaucrat &r);

        std::string                 getName(void) const;
        std::string                 getForm(void) const;        
        int                         getGrade(void) const;

        void                        setName(std::string name);
        void                        setGrade(int grade);

        void                        signForm(Form &contract);
        void                        executeForm(Form const & form);

        struct GradeTooHighException : public std::exception
        {
            const char * what (void) const throw ()
            {
                return ("Person's level is too high.");
            }
        };
        struct GradeTooLowException : public std::exception
        {
            const char * what (void) const throw ()
            {
                return ("Person's level is too low.");
            }
        };

        void                        increment(int n);
        void                        decrement(int n);

    private:
        std::string                 _form;
        std::string                 _name;
        int                         _grade;
};

std::ostream            &operator<<(std::ostream &o, const Bureaucrat &r);

#endif
