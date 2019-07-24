#include "Bureaucrat.hpp"
#include "Form.hpp"

/*------------------CONST/DEST---------------- */

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();  
    }
    else if (grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) {
    *this = cpy;
}

Bureaucrat::~Bureaucrat(void) {
    return ;
}

/*------------------OP OVERLOAD---------------- */

Bureaucrat                  &Bureaucrat::operator=(const Bureaucrat &r) {
    this->_name = r._name;
    this->_grade = r._grade;
    return *this;
};

std::ostream            &operator<<(std::ostream &o, const Bureaucrat &r) {
    o << r.getName() << ", bureaucrat grade " << r.getGrade() << "." << std::endl;
	return o;
}

/*------------------GET--------------- */

std::string                 Bureaucrat::getName(void) const {
    return this->_name;
}

int                         Bureaucrat::getGrade(void) const {
    return this->_grade;
}

std::string                 Bureaucrat::getForm(void) const {
    return this->_form;
}

/*------------------SET--------------- */

void                        Bureaucrat::setName(std::string name) {
    this->_name = name;
}

void                        Bureaucrat::setGrade(int grade) {
    this->_grade = grade;
}

/*------------------INC/DEC--------------- */

void                        Bureaucrat::increment(int n) {
    if ((this->getGrade() - n) < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
    else {
        this->setGrade(this->getGrade() - n);
    }
}

void                        Bureaucrat::decrement(int n) {
    if ((this->getGrade() + n) > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    else {
        this->setGrade(this->getGrade() + n);
    }
}

void                        Bureaucrat::signForm(Form &contract) {
    try {
        contract.beSigned(*this);
        std::cout << contract.getName() << " has been signed by " << this->_name << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void                        Bureaucrat::executeForm(Form const & form) {
    try {
        this->_form = form.getForm();
        form.execute(*this);

    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;    
    }
}
