#include "main.h"

/**
 * print_alphabet - print the alphabets
 * followe by a new line
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int n;
	char lowercase;

	for (n = 1, lowercase = 'a'; n <= 26; n++, lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
}
