#include <stdio.h>

/*
 * main - prints lowercase alphabets
 * Return : Always (0) success
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	putchar(10);
	return (0);
}
