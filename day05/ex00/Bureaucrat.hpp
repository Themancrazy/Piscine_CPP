#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

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

        class GradeTooHighExceptiopn {
            public:
                if (getGrade() < 1) {
                    throw std::exception();
                }
        };
        class GradeTooLowException {
            if (getGrade() > 150) {
                throw std::exception();
            }
        };

    private:
        std::string                 _name;
        int                         _grade;
};

std::ostream            &operator<<(std::ostream &o, const Bureaucrat &r);

#endif
