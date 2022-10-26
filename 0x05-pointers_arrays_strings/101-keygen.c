#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate password
 * Return: Always 0
 */

int main(void)
{
	int n = 0, i = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (i < 2772)
	{
		n = rand() % 128;
		if ((i + n) > 2772)
			break;
		i = i + n;
		printf("%c", n);
	}
	printf("%c\n", (2772 - n));
	return (0);
}
