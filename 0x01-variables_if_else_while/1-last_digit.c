#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable n
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = (n % 10);

	if (x > 5)
		printf("Last digit of %d is %d", n, x);
	else if ((x < 6) && (x != 0)
		printf("Last digit of %d is %d", n, x);
	else
		printf("Last digit of %d is %d", n, x);
	putchar('\n');
	return (0);
}
