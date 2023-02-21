#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase,
 * followed by a new line
 * Return: Alwys 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alph;
	int i;

	i = 0;

	while (i < 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
					alph++;
		}
		_putchar('\n');
		i++;
	}
}
