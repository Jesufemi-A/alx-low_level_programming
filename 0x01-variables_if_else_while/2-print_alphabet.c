#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letra;

	for (letra = 'a' ; letra <= 'z' ; letra++)
	{
		putchar(letra);
	}
	putchar(10);
	return (0);
}
