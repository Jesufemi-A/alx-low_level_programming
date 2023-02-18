#include <stdio.h>

/*
 * main - prints lowercase alphabets
 * followed by a new line
 * Return : Always 0 success
 *
 */

int main(void)
{
	char lower_case_alphabet = 'a';

	for (lower_case_alphabet; lower_case_alphabet <= z; lower_case_alphabet++)
	{
		putchar(lower_case_alphabet);
	}
	putchar(26);
		return (0);
}
