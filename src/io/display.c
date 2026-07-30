#include "display.h"

void display_game(const int field[FIELD_ROWS][FIELD_COLS]) {
    for (int row = 0; row < FIELD_ROWS; row++) {
        for (int col = 0; col < FIELD_COLS; col++) {
            if (field[row][col] == CELL_ALIVE) {
                mvaddch(row, col, '#');
            } else {
                mvaddch(row, col, '.');
            }
        }
    }
    mvprintw(FIELD_ROWS + 1, 0, "Press buttons:\n");
    mvprintw(FIELD_ROWS + 1, 0, "A/Z - To change the game speed\n");
    mvprintw(FIELD_ROWS + 1, 0, "Space - Quit game");
}