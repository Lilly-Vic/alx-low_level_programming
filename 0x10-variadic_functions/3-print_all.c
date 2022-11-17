#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of all types of arguments
 * passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int j = 0, starts = 0;
	char *p;

	va_start(args, format);
	while (format && format[j] != '\0')
	{
		switch (format[j])
		{ case 'c':
			switch (starts)
			{ case 1: printf(", "); }
			starts = 1;
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			switch (starts)
			{ case 1: printf(", "); }
			starts = 1;
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			switch (starts)
			{ case 1: printf(", "); }
			starts = 1;
			printf("%f", va_arg(args, double));
			break;
		case's':
			switch (starts)
			{ case 1: printf(", "); }
			starts = 1;
			p = va_arg(args, char*);
			if (p)
			{
				printf("%s", p);
				break;
			}
			printf("%p", p);
			break;
		}
		j++;
	}
	printf("\n");
	va_end(args);
}
