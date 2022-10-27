#include "main.h"

/**
 * print_buffer - a function that prints the content of size bytes
 * of the buffer pointed by b
 * The output should print 10 bytes per line
 * Starts with the position of the first byte in hexadecimal (8 chars)
 * starting with 0
 * Each line shows the hexadecimal content (2 chars) of the buffer,
 * 2 bytes at a time, separated by a space
 * Each line shows the content of the buffer.
 * If byte is printable then print, if not, print '.'
 * Each line ends with a new line \n
 * If size is 0 or less, the output should be a new line only \n
 * @b: buffer
 * @size: size of buffer
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size < 0)
	{
		printf("\n");
	}

	while (i < size)
	{
		if (i % 10 == 0)
			printf("%08x: ", i);
		for (j = i; j < i + 9; j += 2)
		{
			if ((j < size) && ((j + 1) < size))
				printf("%02x%02x: ", b[j], b[j + 1]);
			else
			{
				while (++j <= i + 10)
					printf(" ");
				printf(" ");
			}
		}
		for (j = i; j < i + 9 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf("\n");
		i += 10;
	}
}
