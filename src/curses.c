
#include "curses.h"

void init_window() { printf("\e[?1049h\e[?7l\e[?25l\e[2J\e[1;57r"); }

void clear() { printf("\e[53H\e[9999C\e[1J\e[1;53r"); }

void terminate_window() { printf("\e[?7h\e[?25h\e[2J\e[;r\e[?1049l"); }

void return_cursor() {
  clear();
  terminate_window();
  exit(0);
}
