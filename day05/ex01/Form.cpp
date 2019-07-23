#include "Form.hpp"

/*---------CONST/DEST---------*/

Form::Form(void) {
    return ;
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _signed(0) {
    if (gradeExec > 150 || gradeSign > 150) {
        throw GradeTooLowException();
    }
    else if (gradeExec < 1 || gradeSign < 1) {
        throw GradeTooLowException();
    }
    else {
        this->_gradeExec = gradeExec;
        this->_gradeSign = gradeSign;
    }
    return ;
}

Form::Form(const Form &cpy) {
    *this = cpy;
}

Form::~Form(void) {
    return ;
}

/*---------OP OVERLOAD---------*/

Form                    &Form::operator=(const Form &r) {
    this->_name = r._name;
    this->_signed = r._signed;
    this->_gradeExec = r._gradeExec;
    this->_gradeSign = r._gradeSign;
    return *this;
}

std::ostream            &operator<<(std::ostream &o, const Form &r) {
    o << "Form name: " << r.getName() << " Sign grade: " << r.getGradeS() << " Exec grade: " << r.getGradeE() << " Signed(yes(1) or no(0): )" << r.getSigned() << std::endl;
    return o;
}

/*--------SET/GET FUNCTION-------*/

std::string                 Form::getName(void) const {
    return this->_name;
}

int                         Form::getGradeS(void) const {
    return this->_gradeSign;
}

int                         Form::getGradeE(void) const {
    return this->_gradeExec;
}

bool                        Form::getSigned(void) const {
    return this->_signed;
}


/*--------THROW EXCEPTION------ */

void                        Form::beSigned(const Bureaucrat &agent) {
   if (this->_gradeSign < agent.getGrade()) {
       throw GradeTooLowException();
   }
   else {
       this->_signed = 1;
   }
}

void                         Form::execute(Bureaucrat const & executor) {
    this->beSigned(executor);
}