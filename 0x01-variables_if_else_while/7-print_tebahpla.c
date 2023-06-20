#include <stdio.h>
/**
 * main - Entry point
 * Description: 'A program that print number of base 10 using putchar'
 * Return: always (0)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
