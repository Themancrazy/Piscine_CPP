#ifndef WINDOW_HPP
#define WINDOW_HPP
#include <iostream>
#include <curses.h>

class Window {
    public:
        Window(void);
        Window(const Window &cpy);
        ~Window(void);

        Window              &operator=(const Window &r);

        void                setWindow(WINDOW *win);

        WINDOW              *getWindow(void);

        void                initWindow(int height, int width, int start_x, int start_y);
        void                createBox(void);
        void                endWindow(void);
        
    private:
        WINDOW              *_window;
};

#endif