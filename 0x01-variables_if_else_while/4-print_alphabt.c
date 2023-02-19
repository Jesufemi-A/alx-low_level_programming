#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';

	for (lower; lower <= 'z'; lower++)
	{
		if (lower != 'e' || lower != 'q')
			putchar(lower);
	}
	return (0);
}
