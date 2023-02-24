#include <math.h>
#include <stdio.h>

/**
 * main - Prints the Largest prime number of the number 612852475143
 * Return: Always 0 (success)
 */

int main(void)

{
	long l, maxnum;
	long num = 612852475143;
	double square = sqrt(num);

	for (l = 1; l <= square; l++)
	{
		if (num % l == 0)
		{
			maxnum = num / l;
		}
	}
	printf("%ld\n", maxnum);
	return (0);
}
