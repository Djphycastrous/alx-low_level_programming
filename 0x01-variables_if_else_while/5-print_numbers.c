#include <stdio.h>
/**
 * main - Entry point
 * Description: 'A program that print single number base in a new line'
 * Return: always (0)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
