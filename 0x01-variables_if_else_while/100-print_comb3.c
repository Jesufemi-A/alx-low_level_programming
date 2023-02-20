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
		for (j = 0; n <= 9; j++)
		{
			if (i != j)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
