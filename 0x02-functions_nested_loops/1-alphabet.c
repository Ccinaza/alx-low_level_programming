#include "main.h"

/**
 * main - a function that prints the alphabet in lowercase
 */
void print_alphabet(void);
{
	char r;

	for (r = 'a'; r <= 'z'; r++)
	{
		_putchar(r);
	}
	_putchar('\n');
}
