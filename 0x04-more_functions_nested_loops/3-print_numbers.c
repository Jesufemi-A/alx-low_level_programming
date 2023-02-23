#include "main.h"

/**
 * print_numbers - displays the value from 0 to 9
 * Return: displays digit value
 */


void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
