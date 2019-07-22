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

        class GradeTooHighException {
            public:
				GradeTooHighException(Bureaucrat& x): parent(x) {}
                void				testGrade(void);
			private:
				Bureaucrat			&parent;
        };
        class GradeTooLowException {
            public:
				GradeTooLowException(Bureaucrat& x): parent(x) {}
                void				testGrade(void);
			private:
				Bureaucrat			&parent;
        };

    private:
        std::string                 _name;
        int                         _grade;
};

std::ostream            &operator<<(std::ostream &o, const Bureaucrat &r);

#endif
