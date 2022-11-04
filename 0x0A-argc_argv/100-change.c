#include "main.h"

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: returns 1 if there is an error; else returns 0
 */

int main(int argc, char *argv[])
{
	int coins, amount, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = 0;
	amount  = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	while (amount)
	{
		if (amount >= 25)
			cents = 25;
		else if (amount >= 10)
			cents = 10;
		else if (amount >= 5)
			cents = 5;
		else if (amount >= 2)
			cents = 2;
		else
			cents = 1;

		coins += amount / cents;
		amount %= cents;
	}

	printf("%d\n", coins);
	return (0);

}
