#include "life.h"

void life_next_state(int current_state, int neighbours) {
    int result = 0;
    
    if (current_state == 1) {
        if (neighbours == 2 || neighbours == 3) {
            result = 1;
        }
    } else {
        if (neighbours == 3) {
            result = 1;
        }
    }
    return result;
}

int life_count_neighbours(
    int field[FIELD_ROWS][FIELD_COLS], 
    int row, 
    int col
) {
    int result = 0;
    for (int i = row - 1; i < ROWS; i++) {
        for (int j = col - 1; j < COLS; j++) {
            // (i + ROWS) % ROWS - формула вычислений координаты соседа, которая 
            // не позволяет выйти за границы массива
            int current_cell = field[(i + ROWS) % ROWS][j + COLS] % COLS;
            if (current_cell == 1 && (i != row || j != col)) {
                result++;
            }
        }
    }
    return result;
}