#include <stdio.h>
/**
 * main - Entry point
 * Description: 'A program that print number of base 16 using putchar'
 * Return: always (0)
 */
int main(void)
{
	char pg;

	for (pg = '0'; pg <= '9'; pg++)
	{
		putchar(pg);
	}
	for (pg = 'a'; pg <= 'f'; pg++)
	{
		putchar(pg);
	}
	putchar('\n');
	return (0);
}
