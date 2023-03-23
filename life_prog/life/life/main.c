#include "life_f.h"

int main()
{
	init_field();
	for (int k = 0; k < 5; k++)
	{
		for (int i = 0; i < WIDTH; i++)
		{
			for (int j = 0; j < HEIGHT; j++)
			{
				printf_s("%d ", field[i][j]);
			}
			printf_s("\n");
		}
		printf_s("\n");
		next_gen();

	}
}