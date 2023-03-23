#include "life_f.h"

void init_field()
{
	srand(time(NULL));
	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			int r = rand() % 10;
			if (r > 4 && r <= 9)
				field[i][j] = 1;
			else
				field[i][j] = 0;
		}
	}
}

int next_gen()
{

	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			int c = count_nei(i, j);
			if (((c == 2 || c == 3) && field[i][j] == 1 ) || (c == 3 && field[i][j] == 0))
				new_field[i][j] = 1;
			else
				new_field[i][j] = 0;
		}
	}

	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			field[i][j] = new_field[i][j];

		}
	}
}

int count_nei(int i, int j)
{
	int count_n = 0;
	for (int k = i - 1; k <= i + 1; k++)
	{
		if (k < 0 || k > WIDTH)
			continue;
		for (int s = j - 1; s <= j + 1; s++)
		{
			if (s < 0 || s > HEIGHT)
				continue;
			if (k == i && s == j)
				continue;
			count_n += field[k][s];
		}
	}

	return count_n;
}