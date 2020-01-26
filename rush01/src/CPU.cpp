#include "CPU.hpp"

CPU::CPU(void) {
    return ;
}

CPU::CPU(const CPU &cpy) {
    *this = cpy;
}

CPU::~CPU(void) {
    return ;
}

CPU                 &CPU::operator=(const CPU &r) {
    (void)r;
    return *this;
}

int32_t				CPU::getCores(void) {
	size_t sz;
    int32_t tmp;

    sz = sizeof(tmp);
    tmp = 0;
	sysctlbyname("machdep.cpu.core_count", &tmp, &sz, NULL, 0); 

	return tmp; 
}

int32_t				CPU::getModel(void) {
	size_t sz;
    int32_t tmp;

    sz = sizeof(tmp);
    tmp = 0;
	sysctlbyname("machdep.cpu.model", &tmp, &sz, NULL, 0); 

	return tmp; 
}

int64_t				CPU::getThread(void) {
	size_t sz;
    int64_t tmp;

    sz = sizeof(tmp);
    tmp = 0;
	sysctlbyname("hw.cpufrequency", &tmp, &sz, NULL, 0); 

	return tmp; 
}

std::string         CPU::getUsage(void) {
    char buff[256];

    std::string result = "";
    FILE* file = popen("top -l 1 | grep \"CPU usage\"", "r");
    while (fgets(buff, sizeof(buff), file) != NULL)
        result += buff;
    pclose(file);
    result.erase(result.find('\n', 0), 1);
    return result;
}