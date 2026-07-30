#ifndef CONTROL_H
#define CONTROL_H

#define GAME_DELAY_STEP 500
#define GAME_MIN_DELAY 500
#define GAME_MAX_DELAY 2000

int get_buttons(int* delay);

#include <ncurses.h>

#endif