#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * print the last digit of the number stored in the variable n
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d", n, n % 9);
	if (n % 9 > 5)
		printf("and is greater than 5\n");
	else if (n % 9 == 0)
		printf("and is 0\n");
	else if (n % 9 < 6 && n % 9 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
