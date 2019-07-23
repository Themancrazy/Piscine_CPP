#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm(void) {
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) {
    // std::ofstream file;

    // file.open(target);
    // file << ""
    std::cout << "<ZZRRGH ZUUURRGHH BIP BIP> " << target << " has been robotomized successfully 50% of the time. the rest of times, tells us it’s a failure." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) {
    *this = cpy;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
    return ;
}

RobotomyRequestForm                  &RobotomyRequestForm::operator=(const RobotomyRequestForm &r) {
    (void)r;
    return *this;
}