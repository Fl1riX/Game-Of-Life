#include "life.h"

CellState life_next_state(CellState current_state, int neighbours) {
    CellState result = CELL_DEAD;

    if (current_state == CELL_ALIVE) {
        if (neighbours == 2 || neighbours == 3) {
            result = CELL_ALIVE;
        }
    } else {
        if (neighbours == 3) {
            result = CELL_ALIVE;
        }
    }
    return result;
}

int life_count_neighbours(const int field[FIELD_ROWS][FIELD_COLS], int row,
                          int col) {
    int result = 0;
    for (int i = row - 1; i <= row + 1; i++) {
        for (int j = col - 1; j <= col + 1; j++) {
            // (i + ROWS) % ROWS - формула вычислений координаты соседа, которая
            // не позволяет выйти за границы массива
            int current_cell = field[(i + FIELD_ROWS) % FIELD_ROWS]
                                    [(j + FIELD_COLS) % FIELD_COLS];
            if (i != row || j != col) {
                result += current_cell;
            }
        }
    }
    return result;
}

void life_next_generation(const int field[FIELD_ROWS][FIELD_COLS],
                          int next[FIELD_ROWS][FIELD_COLS]) {
    for (int row = 0; row < FIELD_ROWS; row++) {
        for (int col = 0; col < FIELD_COLS; col++) {
            next[row][col] = life_next_state(
                field[row][col], life_count_neighbours(field, row, col));
        }
    }
}

void life_copy_field(int field[FIELD_ROWS][FIELD_COLS],
                     const int next[FIELD_ROWS][FIELD_COLS]) {
    for (int row = 0; row < FIELD_ROWS; row++) {
        for (int col = 0; col < FIELD_COLS; col++) {
            field[row][col] = next[row][col];
        }
    }
}

int is_game_finished(const int field[FIELD_ROWS][FIELD_COLS]) {
    int result = 1;
    for (int row = 0; row < FIELD_ROWS && result == 1; row++) {
        for (int col = 0; col < FIELD_COLS && result == 1; col++) {
            if (field[row][col] == CELL_ALIVE) {
                result = 0;
            }
        }
    }
    return result;
}