#ifndef CPU_HPP
#define CPU_HPP
#include "Gkrellm.h"

class CPU : public IMonitorModule {
    public:
        CPU(void);
        CPU(const CPU &cpy);
        ~CPU(void);

        CPU                     &operator=(const CPU &r);

        int32_t				getCores(void);
        int32_t				getModel(void);
        int64_t			    getThread(void);
        std::string         getUsage(void);
};

#endif