#ifndef OS_HPP
# define OS_HPP
# include "Gkrellm.h"
# include <iostream>

class OS : public IMonitorModule {
    public:
        OS(void);
        ~OS(void);

        struct utsname		getOsInfos(void);
        std::string			getTime(void);
        std::string			getHostname(void);
};

#endif