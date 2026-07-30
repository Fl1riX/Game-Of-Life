#include "input.h"

#include <stdio.h>
#include <unistd.h>

static int read_preset(int field[FIELD_ROWS][FIELD_COLS]);
static void init_field(int field[FIELD_ROWS][FIELD_COLS]);
static void load_default_preset(int field[FIELD_ROWS][FIELD_COLS]);

int get_input(int field[FIELD_ROWS][FIELD_COLS]) {
    int result = 1;
    init_field(field);

    // Если ввод из терминала
    if (isatty(STDIN_FILENO)) {
        load_default_preset(field);
    } else {
        result = read_preset(field);
    }
    return result;
}

// Инициализация поля
static void init_field(int field[FIELD_ROWS][FIELD_COLS]) {
    for (int row = 0; row < FIELD_ROWS; row++) {
        for (int col = 0; col < FIELD_COLS; col++) {
            field[row][col] = CELL_DEAD;
        }
    }
}

static void load_default_preset(int field[FIELD_ROWS][FIELD_COLS]) {
    static const int glider[3][3] = {// Шаблон глайдера
                                     {0, 1, 0},
                                     {0, 0, 1},
                                     {1, 1, 1}};

    const int preset_rows = sizeof(glider) / sizeof(glider[0]);
    // 3 * 3 * 4 = 36. 3 строки по 3 элемента int(4 байта) = 36байт
    // glider[0] - первая строка. 3 * 4 = 12
    // 36 / 12 = 3 - количество строк
    const int preset_cols = sizeof(glider[0]) / sizeof(glider[0][0]);
    // 12 / 4 = 3
    // sizeof(glider[0][0]) - размер 1 элемента т.е int = 4 байт

    const int start_row = FIELD_ROWS / 2 - preset_rows / 2;
    const int start_col = FIELD_COLS / 2 - preset_cols / 2;

    for (int row = 0; row < preset_rows; row++) {
        for (int col = 0; col < preset_cols; col++) {
            field[start_row + row][start_col + col] = glider[row][col];
        }
    }
}

static int read_preset(int field[FIELD_ROWS][FIELD_COLS]) {
    int result = 1;
    int value;

    for (int row = 0; row < FIELD_ROWS && result == 1; row++) {
        for (int col = 0; col < FIELD_COLS && result == 1; col++) {
            if (scanf("%d", &value) == 1 && (value == 1 || value == 0)) {
                field[row][col] = value;
            } else {
                result = 0;
            }
        }
    }
    return result;
}