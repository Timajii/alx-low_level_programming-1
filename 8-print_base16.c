#include <stdio.h>
/**
 * main - Prints out the hexadecimalnumbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;
	char alpha;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
