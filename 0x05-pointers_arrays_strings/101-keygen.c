#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - enerates random valid passwords for the program 101-crackme
 * Return: Always 0
 */

int main(void)
{
	int s = 0, r;
	time_t t;

	srand((unsigned int) time(&t));
	while (r < 2772)
	{
		s = rand() % 128;
		if ((r + s) > 2772)
			break;
		r = r + s;
		printf("%c", s);
	}
	printf("%c\n", (2772 - r));
	return (0);
}
