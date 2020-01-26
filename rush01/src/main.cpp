#include "Gkrellm.h"
#include "display.hpp"
#include "RAM.hpp"
#include "CPU.hpp"
#include "Window.hpp"
#include  "OS.hpp"

/* TO CREATE:

IMonitorModule && IMonitorDisplay

-> find out which does what.
-> Module can be changed: 1. At compile time 2. When program is running 3. During execution (BEST)
----------------------------------------------------------------------------------------------
1. GET:
- Hostname -> Antoine
- OS info module ->Klim
- Date/time Module -> Antoine
																SATURDAY
2. GET
- CPU module (real time usage, number of cores) -> Antoine
- RAM module (real time usage) -> Klim
--------------------------------------------------------------------------------------------
3.GET
- • Network throughput module (don't know what that mean yet). ->Both

4.BONUS
																SUNDAY
--------------------------------------------------------------------------------------------
*/
/* Initialise gkrelm in Text mode */

/*-------------MAIN FUNCTIONS----------*/

void			startTextMode(void) {
	Window mainWin;
	OS os;
	NetworkThroughput net;
	CPU cpu;
	RAM ram;
	display dis;
	start_color();
	mainWin.initWindow(30, 55, 1, 1);
	mainWin.createBox();
	while (1) {
	clear();
	dis.displayIt(mainWin, os, cpu, ram, net);
	wrefresh(mainWin.getWindow());
	usleep(25000);
	if (wgetch(mainWin.getWindow()) == 27) {
		mainWin.endWindow();
		exit(0);
	}	
	}
}

int				main(int ac, char **av) {
	(void)av;
	if (ac == 1) {
		startTextMode();
	}
	else
		std::cout << "usage: ./ft_gkrellm>" << std::endl;
	return (0);
}
