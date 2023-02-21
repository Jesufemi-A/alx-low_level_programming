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

	for (n = 1, alpha = 'a'; n <= 26; n++, alpha++)
			_putchar(alpha);
}
