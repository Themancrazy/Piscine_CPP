#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>

class Bureaucrat {
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &cpy);
        ~Bureaucrat(void);

        Bureaucrat                  &operator=(const Bureaucrat &r);

        std::string                 getName(void) const;
        int                         getGrade(void) const;

        void                        setName(std::string name);
        void                        setGrade(int grade);

        void                        signForm(void);

        struct GradeTooHighException : public std::exception
        {
            const char * what (void) const throw ()
            {
                return ("TOO HIGH");
            }
        };
        struct GradeTooLowException : public std::exception
        {
            const char * what (void) const throw ()
            {
                return ("TOO LOW");
            }
        };

        void                        increment(int n);
        void                        decrement(int n);

    private:
        std::string                 _name;
        int                         _grade;
};

std::ostream            &operator<<(std::ostream &o, const Bureaucrat &r);

#endif
