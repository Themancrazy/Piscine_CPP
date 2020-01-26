#include "display.hpp"
#include "Gkrellm.h"
#include <curses.h>

display::display(void) {
    return ;
}

display::~display(void) {
    return ;
}

/*--------------EXTRA FUNCTION-----------------*/

static std::string bytes_format(long bytes)
{
    static const std::string s[] = {
        "bytes", "KB", "MB", "GB", "TB"
    };

    long double b = bytes;

	int i = 0;
    for (; b >= 1024 && i < 5; i++)
        b /= 1024;

	std::stringstream ss;
    ss << std::fixed << b << " " << s[i];

    return (ss.str());
}

static std::string			trunc(int width, std::string field)
{
	field = field.erase((width - 1), field.length() - (width - 1));
	return (field);
}

/*------------------MAIN DISPLAY FUNCTION-------------------*/

void				display::displayIt(Window mainWin, OS os, CPU cpu, RAM ram, NetworkThroughput net) {
	ram.setAllValues();
	mvwprintw(mainWin.getWindow(), 1, 1, "Time: %s", trunc(20, os.getTime()).c_str());
	mvwprintw(mainWin.getWindow(), 2, 1, "Hostname: %s", os.getHostname().c_str());
	mvwprintw(mainWin.getWindow(), 3, 1, "--------------------OS Infos--------------------");
	mvwprintw(mainWin.getWindow(), 4, 1, "OS info: %s", trunc(29, os.getOsInfos().version).c_str());
	mvwprintw(mainWin.getWindow(), 5, 1, "OS machine: %s", os.getOsInfos().machine);
	mvwprintw(mainWin.getWindow(), 6, 1, "OS nodename: %s", os.getOsInfos().nodename);
	mvwprintw(mainWin.getWindow(), 7, 1, "OS version: %s", os.getOsInfos().release);
	mvwprintw(mainWin.getWindow(), 8, 1, "--------------------CPU INFOS--------------------");
    init_pair(1, COLOR_RED, COLOR_BLACK);
    wattron(mainWin.getWindow(), COLOR_PAIR(1));
	mvwprintw(mainWin.getWindow(), 9, 1, "CPU number of cores: %d", cpu.getCores());
	mvwprintw(mainWin.getWindow(), 10, 1, "CPU model: %d", cpu.getModel());
	mvwprintw(mainWin.getWindow(), 11, 1, "CPU thread count: %d", cpu.getThread());
	mvwprintw(mainWin.getWindow(), 12, 1, "%s", cpu.getUsage().c_str());
    wattroff(mainWin.getWindow(), COLOR_PAIR(1));
	mvwprintw(mainWin.getWindow(), 13, 1, "--------------------RAM INFOS--------------------");
    init_pair(2, COLOR_CYAN, COLOR_BLACK);
    wattron(mainWin.getWindow(), COLOR_PAIR(2));
	mvwprintw(mainWin.getWindow(), 14, 1, "Physical Memory:\t%ld\t%s", ram.getPhysicalMemory(), bytes_format(ram.getPhysicalMemory()).c_str());
	mvwprintw(mainWin.getWindow(), 15, 1, "Used Memory:\t\t%ld\t%s", ram.getUsedMemory(), bytes_format(ram.getUsedMemory()).c_str());
	mvwprintw(mainWin.getWindow(), 16, 1, "Wired Memory:\t\t%ld\t%s", ram.getWiredMemory(), bytes_format(ram.getWiredMemory()).c_str());
	mvwprintw(mainWin.getWindow(), 17, 1, "Compressed Memory:\t%ld\t%s", ram.getComprMemory(), bytes_format(ram.getComprMemory()).c_str());
	mvwprintw(mainWin.getWindow(), 18, 1, "Decompressed Memory:\t%ld\t%s", ram.getDecompMemory(), bytes_format(ram.getDecompMemory()).c_str());
	mvwprintw(mainWin.getWindow(), 19, 1, "Swap Used:\t\t%ld\t%s", ram.getSwapMemory(), bytes_format(ram.getSwapMemory()).c_str());
	mvwprintw(mainWin.getWindow(), 20, 1, "Purged Memory:\t\t%ld\t%s", ram.getPurgeMemory(), bytes_format(ram.getPurgeMemory()).c_str());
	mvwprintw(mainWin.getWindow(), 21, 1, "Free paged Memory:\t%ld\t%s", ram.getFreeMemory(), bytes_format(ram.getFreeMemory()).c_str());
	mvwprintw(mainWin.getWindow(), 22, 1, "Speculative Memory:\t%ld\t%s", ram.getSpeculMemory(), bytes_format(ram.getSpeculMemory()).c_str());
	mvwprintw(mainWin.getWindow(), 23, 1, "Anonymous Memory:\t%ld\t%s", ram.getAnonymousMemory(), bytes_format(ram.getAnonymousMemory()).c_str());
	mvwprintw(mainWin.getWindow(), 24, 1, "Pageins:\t\t%ld\t%s", ram.getPageinMemory(), bytes_format(ram.getPageinMemory()).c_str());
	mvwprintw(mainWin.getWindow(), 25, 1, "Pageouts:\t\t%ld\t%s", ram.getPageoutMemory(), bytes_format(ram.getPageoutMemory()).c_str());
    wattroff(mainWin.getWindow(), COLOR_PAIR(2));
	mvwprintw(mainWin.getWindow(), 26, 1, "----------------------NETWORK----------------------");
    init_pair(3, COLOR_YELLOW, COLOR_BLACK);
    wattron(mainWin.getWindow(), COLOR_PAIR(3));
	mvwprintw(mainWin.getWindow(), 27, 1, "Network In:\t\t%lld", net.getIpsReceived());
	mvwprintw(mainWin.getWindow(), 28, 1, "Network Out:\t\t%lld", net.getIpsSent());
    wattroff(mainWin.getWindow(), COLOR_PAIR(3));
}
