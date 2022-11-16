#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: return 1 on success, or 2 in case of failure
 */

int main(int argc, char *argv[])
{
	int num_of_bytes, i;
	int (*address)(int, char **) = &main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_of_bytes = atoi(argv[1]);
	if (num_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i <  num_of_bytes; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == num_of_bytes - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
