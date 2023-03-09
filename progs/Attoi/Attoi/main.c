#include <stdio.h>
#include <string.h>
#include "att.h"

int main()
{
	char* number = (char*)malloc(sizeof(char) * 13);
	gets_s(number, 13);
	int num = attoi(number);
	if (num != 0)
		printf_s("%d is integer\n", num);
	else if (num == 0)
	{
		puts(number);
		printf_s(" is not integer\n");
	}

	system("pause");
	return 0;
}