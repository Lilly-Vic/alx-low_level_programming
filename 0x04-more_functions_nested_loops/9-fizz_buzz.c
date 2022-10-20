#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: print Fizz for a multiple of 3 and Buzz for 5
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if(i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
