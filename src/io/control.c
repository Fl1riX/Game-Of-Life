#include "control.h"

int get_buttons(int *delay) {
    int result = 1;
    int pressed_button = getch();

    switch (pressed_button) {
        case 'a':
            if (*delay > GAME_MIN_DELAY) {
                *delay -= GAME_DELAY_STEP;
            }
            break;
        case 'z':
            if ( *delay < GAME_MAX_DELAY) {
                *delay += GAME_DELAY_STEP;
            }
            break;
        case ' ':
            result = 0;
            break;
        default:
            break;
    }
    return result;
}

