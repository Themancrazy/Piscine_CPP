#ifndef DISPLAY_HPP
# define DISPLAY_HPP   
# include "Gkrellm.h"
# include "display.hpp"
# include "RAM.hpp"
# include "CPU.hpp"
# include "Window.hpp"
# include "OS.hpp"

class display : public IMonitorDisplay {
    public:
        display(void);
        ~display(void);

        void				displayIt(Window mainWin, OS os, CPU cpu, RAM ram, NetworkThroughput net);
};

#endif