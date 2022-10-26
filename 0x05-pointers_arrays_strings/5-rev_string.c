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
	char s[] = "ALX School";
	strrev(s);
		cout<<"\n"<<s;
	return (0);
}
