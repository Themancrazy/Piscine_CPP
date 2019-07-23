#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) {
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) {
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) {
    *this = cpy;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
    return ;
}

PresidentialPardonForm                  &PresidentialPardonForm::operator=(const PresidentialPardonForm &r) {
    (void)r;
    return *this;
}