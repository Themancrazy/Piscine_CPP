#include "OS.hpp"

OS::OS(void) {
    return ;
}

OS::~OS(void) {
    return ;
}

std::string			OS::getTime(void) {
	time_t tt;
	struct tm * ti; 
    time (&tt); 
    ti = localtime(&tt);
	return (asctime(ti));
}

std::string			OS::getHostname(void) {
	return (getenv("USER"));
}

struct utsname		OS::getOsInfos(void) {
	struct utsname buffer;

	errno = 0;
	if (uname(&buffer) != 0) {
		perror("uname");
		exit(EXIT_FAILURE);
	}
	return buffer;
}