#include "Window.hpp"
#include <curses.h>

/* -------------CONST/DEST-------------- */

Window::Window(void) {
    return ;
}

Window::Window(const Window &cpy) {
    *this = cpy;
}

Window::~Window(void) {
    return ;
}

Window              &Window::operator=(const Window &r) {
    this->_window = r._window;
    return *this;
}

/* -------------GET-------------- */

WINDOW                *Window::getWindow(void) {
    return this->_window;
}

/* -------------GET-------------- */

void                  Window::setWindow(WINDOW *win) {
    this->_window = win;
}

/* -------------INIT-SCR-------------- */

void                Window::initWindow(int height, int width, int start_x, int start_y) {
    initscr();
    start_color();
    cbreak();
    noecho();
    WINDOW *mainwin = newwin(height, width, start_y, start_x);
    keypad(mainwin, true);
    curs_set(0);
    nodelay(mainwin, true);
    refresh();
    setWindow(mainwin);
}

void              Window::createBox(void) {
    box(this->getWindow(), 0, 0);
}

void              Window::endWindow(void) {
    endwin();
}