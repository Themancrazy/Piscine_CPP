#include "Bureaucrat.hpp"

/*------------------CONST/DEST---------------- */

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    return ;    
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

/*------------------SET--------------- */

void                        Bureaucrat::setName(std::string name) {
    this->_name = name;
}

void                        Bureaucrat::setGrade(int grade) {
    this->_grade = grade;
}

/*------------------SET--------------- */

void						Bureaucrat::GradeTooHighException::testGrade(void) {
	if (parent.getGrade() < 1) {
		throw std::exception();
	}
}

void						Bureaucrat::GradeTooLowException::testGrade(void) {
	if (parent.getGrade() > 150) {
		throw std::exception();
	}
}
