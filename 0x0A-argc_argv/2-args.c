#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
