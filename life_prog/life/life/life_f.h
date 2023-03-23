#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH 5
#define HEIGHT 5

#define LIFE_H_
#ifdef LIFE_H_

int field[WIDTH][HEIGHT];
int new_field[WIDTH][HEIGHT];

void init_field();
int next_gen();
int count_nei(int i, int j);

#endif // LIFE_H_
