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
	int i, j, k;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%.8x: ", i);
			for (i = j; i < j + 10; j++)
			{
				if (j % 2 == 0)
					printf(" ");
				if (j < size)
					printf("%.2x", *(b + j));
				else
					printf(" ");
			}
			printf(" ");
			for (k = i; k < i + 10; i++)
			{
				if (k >= size)
					break;
				if (*(b + k) < 32 || *(b + k) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + k));
			}
			printf("\n");
		}
	}
}
