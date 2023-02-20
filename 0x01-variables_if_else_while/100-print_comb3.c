#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int j;

	for (n =  0; n <= 9; n++)
	{
		for (j = n; j <= 9; j++)
		{
			if (n != j)
			{
				putchar('0' + n);
				putchar('0' + j);
				if (n != 8 || j != 9)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
