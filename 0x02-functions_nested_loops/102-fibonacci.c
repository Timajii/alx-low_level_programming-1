#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fin2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib3 = sum;
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}