#include "main.h"
#include <iostream>
using namespace std;

/**
 * rev_string - reverses a string
 * @s: string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int n, max, half;
	char first, last;
	
	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	mnax = n - 1;
	half = max / 2;
	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
}
