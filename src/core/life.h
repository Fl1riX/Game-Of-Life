#ifndef LIFE_H
#define LIFE_H

#define ROWS 25
#define COLS 80

int life_next_state(int current_state, int neighbours);
int life_count_neighbours(
    int field[FIELD_ROWS][FIELD_COLS], 
    int row, 
    int col
);
void life_next_generation(
    int field[FIELD_ROWS][FIELD_COLS], 
    int next[FIELD_ROWS][FIELD_COLS]
);

#endif