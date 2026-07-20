#ifndef LIFE_H
#define LIFE_H

#define FIELD_ROWS 25
#define FIELD_COLS 80

int life_next_state(int current_state, int neighbours);
int life_count_neighbours(
    const int field[FIELD_ROWS][FIELD_COLS], 
    int row, 
    int col
);
void life_next_generation(
    const int field[FIELD_ROWS][FIELD_COLS], 
    int next[FIELD_ROWS][FIELD_COLS]
);
void life_copy_field(int field[FIELD_ROWS][FIELD_COLS],
                     const int next[FIELD_ROWS][FIELD_COLS]);

#endif