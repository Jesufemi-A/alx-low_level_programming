#include "main.h"
int helper_function(int n, int a);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: receives the arguement
 * Return: returns square root
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (helper_function(n, 0));
}

/**
 * helper_function - helps to calculate the square
 * @n: arguement for squaare root
 * @a: helpeer function parameter
 * Return: returns square root or -1
 */

int helper_function(int n, int a)
{
	if (a * a == n)
		return (a);
	if (a * a > n)
		return (-1);
	return (helper_function(n, a + 1));
}
