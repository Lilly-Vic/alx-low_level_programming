#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: argument vector
 * Return; 0
 */

int main(int argc, char *argv[])
{
	int args;

	for (args = 0; args < argc; args++)
		printf("%s\n", argv[args]);

	return (0);
}
