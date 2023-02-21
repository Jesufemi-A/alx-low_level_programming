#include "main.h"

/**
 * print_alphabet - prints the alphabets
 * followed by a new line
 * Return: Always 0 (Success)
 */


void print_alphabet(void)
{
	int n;
	char alpha;

	for (n = 1; n <= 26; n++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
	}
}
