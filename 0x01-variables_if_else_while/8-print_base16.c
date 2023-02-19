#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char alpha;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
