#include <stdio.h>

/**
 * main - Print alphabet in lowercase
 *
 * Return: Always 0 (Success);
 */
void print_alphabet(void)
{
	for(int x = 'A'; x <= 'z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	return 0;
}
