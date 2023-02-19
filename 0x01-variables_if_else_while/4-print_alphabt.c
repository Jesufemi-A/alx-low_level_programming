#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z')
	{
		if (lower != 'e' || lower != 'q')
		{
			putchar(lower);
		}
		else
		{
			lower++
		}
	}
	return (0);
}
