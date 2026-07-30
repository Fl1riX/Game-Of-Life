#ifndef LIFE_H
#define LIFE_H

#define FIELD_ROWS 25
#define FIELD_COLS 80

// Создает новый тип данных CellState
// Может принимать значение из заранее заданного списка
// Создаем константы через которые будем присваивать значение
typedef enum { CELL_DEAD = 0, CELL_ALIVE = 1 } CellState;

CellState life_next_state(CellState current_state, int neighbours);
int life_count_neighbours(const int field[FIELD_ROWS][FIELD_COLS], int row,
                          int col);
void life_next_generation(const int field[FIELD_ROWS][FIELD_COLS],
                          int next[FIELD_ROWS][FIELD_COLS]);
void life_copy_field(int field[FIELD_ROWS][FIELD_COLS],
                     const int next[FIELD_ROWS][FIELD_COLS]);
int is_game_finished(const int field[FIELD_ROWS][FIELD_COLS]);

#endif