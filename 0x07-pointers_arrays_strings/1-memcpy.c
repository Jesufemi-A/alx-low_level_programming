#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: parameter dest to take arguement
 * @src: parameter src to accept input
 * @n: paramater unsigned int that takes in value
 * Return: Always 0 (success)
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
