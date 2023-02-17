#include <stdio.h>
/**
 * main - A program that prints the size of data types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)", sizeof(char));
printf("Size of an int: %lu bytes(s)", sizeof(int));
printf("Size of a long int: %lu  byte(s)", sizeof(long));
printf("Size of a long long int: %lu byte(s)", sizeof(long long));
printf("Size of a float: %lu byte(s)", sizeof (float));
return (0);
}
