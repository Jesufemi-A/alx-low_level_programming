#include <stdio.h>

/*
 * main - prints lowercase alphabets
 * Return : Always (0) success
 */

int main(void)
{
	char lower_case_alphabet;

	for (lower_case_alphabet = a; lower_case_alphabet <= z; lower_case_alphabet++)
	{
		putchar(lower_case_alphabet);
	}
	putchar(10);
	return (0);
}
