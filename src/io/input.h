#ifndef INPUT_H
#define INPUT_H

#include <ncurses>
#include <unistd.h>
#include "life.h"

int get_input(int field[FIELD_ROWS][FIELD_COLS]);
void load_default_preset(int field[FIELD_ROWS][FIELD_COLS]);
int read_preset(int field[FIELD_ROWS][FIELD_COLS]);

#endif