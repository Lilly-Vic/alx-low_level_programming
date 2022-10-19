#include <stdio.h>

/**
 * main - Entry point
 * Description: finds and prints the sum of the even-valued terms
 * Return: Always 0 (Success)
 */

int main(void){
	int i, num1, num2, next sum;

	num1 = 1;
	num2 = 2;
	sum = 0;

	for (1 = 1; i <= 33; ++i)
	{
		if (num1 < 4000000 && (num1 % 2) == 0)
			sum = sum + num1;
		next = num1 + num2;
		num1 = num2;
		num2 = next;
	}
	printf("%lu\n", sum);
	return (0);
}
