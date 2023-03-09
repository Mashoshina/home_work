#include "att.h"
#include <stdio.h>

int attoi(char* num)
{
	int sign = 1;

	int res = 0;

	int i = 0;

	if (num[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; num[i] != '\0'; i++)
	{
		if (num[i] >= '0' && num[i] <= '9')
			res = res * 10 + num[i] - '0';
			
		else
			return 0;
	}

	return res * sign;
}