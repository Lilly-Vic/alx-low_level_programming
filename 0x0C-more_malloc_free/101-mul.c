#include "main.h"

int get_len(char *str);
void get_prod(char *dest, char *digit1, int digit1_len, char *digit2, int digit2_len);
void result(char *src, int length);

/**
 * get_len - Finds the length of a string.
 * @str: The string to be measured.
 * Return: The length of the string.
 */
int get_len(char *str)
{
	int len = 0;
	
	while (str[len])
	{
		if (str[len] >= '0' && str[len] <= '9')
			len++;
		else
			return ('\0');
	}
	
	return (len);
}

/**
 * get_prod - multiplies two numbers stored as string
 * and stores result in @dest
 * @dest: pointer to where @num1 * @num2 should be stored
 * @digit1: positive number stored as string in an array
 * @digit2: positive number stored as string in an array
 * @digit1_len: length of @digit1
 * @digit2_len: length of @digit2
 */
void get_prod(char *dest, char *digit1, int digit1_len, char *digit2, int digit2_len)
{
	int m, n, i, temp_value, zero;
	int carry_value = 0;
	char *final_prod, *multiplier;
	
	if (digit1_len > digit2_len)
	{
		m = digit1_len - 1;
		n = digit2_len - 1;
		final_prod = digit1;
		multiplier = digit2;
	}
	else
	{
		m = digit2_len - 1;
		n = digit1_len - 1;
		final_prod = digit2;
		multiplier = digit1;
	}
	
	while (m >= 0)
	{
		i = m;
		while (i >= 0)
		{
			temp_value = ((final_prod[i] - '0') * (multiplier[n] - '0'));
			temp_value += carry_value;
			
			if (n + 1 <= digit2_len - 1 && dest[i + n + 1] >= '0' && dest[i + n + 1] <= '9')
				temp_value += dest[i + n + 1] - '0';
			
			if (temp_value < 10)
			{
				zero = temp_value;
				carry_value = 0;
			}
			else
			{
				zero = temp_value % 10;
				carry_value = temp_value / 10;
			}
			dest[i + n + 1] = zero + '0';
			i--;
		}
		
		if (carry_value)
			dest[i + n + 1] = carry_value + '0';
		
		carry_value = 0;
		
		if (n > 0)
			n--;
		else
			m = -1;
	}
	free(dest);
	free(final_prod);
	free(multiplier);
}

/**
 * result - prints numbers stored as string in a memory location
 * @src: pointer to memory that stores numbers as strings
 * @length: length of @src
 */
void result(char *src, int length)
{
	int i;
	
	for (i = 0; i < length; i++)
	{
		if (src[i] >= '0' && src[i] <= '9')
			printf("%c", src[i]);
	}
}

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: 0, Success
 */
int main(int argc, char *argv[])
{
	char *mul;
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	
	num1 = get_len(argv[1]);
	if (!num1)
	{
		printf("Error\n");
		exit(98);
	}
	
	num2 = get_len(argv[2]);
	if (!num2)
	{
		printf("Error\n");
		exit(98);
	}
	
	mul = malloc(num1 + num2);
	if (!mul)
		return (1);
	
	get_prod(mul, argv[1], num1, argv[2], num2);
	
	result(mul, num1 + num2);
	printf("\n");
	free(mul);

	return (0);
}
