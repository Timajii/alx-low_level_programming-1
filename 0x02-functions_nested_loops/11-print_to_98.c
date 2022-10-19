#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural number from n to 98
 * @n: input from user
 * Return: Returns 0
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
