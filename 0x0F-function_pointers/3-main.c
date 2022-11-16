#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func_ptr = get_op_func(argv[2]);

	if (!func_ptr)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func_ptr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
