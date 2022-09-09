#include <stdio.h>

/**
 * Main - Prints alphabet in lowercase
 *
 * Return: Always (Success)
 */
char main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}

