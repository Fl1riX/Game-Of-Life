#include <ncurses.h>
#include "life.h"
#include "control.h"
#include "display.h"
#include "input.h"

int main(void) {
    init_display();

    int field[FIELD_ROWS][FIELD_COLS];
    int next[FIELD_ROWS][FIELD_COLS];
    int game_run = 1;
    int delay = 500;

    if (get_input(field) == 0) {
        game_run = 0;
    }
    while (game_run != 0) {
        clear();
        display_game(field);
        refresh();
        game_run = get_buttons(&delay);

        if (game_run != 0) {
            life_next_generation(field, next);
            life_copy_field(field, next);

            if (is_game_finished(field) == 1) {
                game_run = 0;
            }
        }
        napms(delay);
    }
    endwin();
    return 0;
}