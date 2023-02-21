#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

print_alphabet_x10(void)
{
	int m;
	int n;
	char alpha;

	for (m = 1; m <= 10; m++)
	{
		for (n = 1, alpha = 'a'; n <= 26; n++, alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
