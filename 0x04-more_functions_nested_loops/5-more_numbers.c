#include "main.h"

/**
 * print_most_numbers -> this prints most numbers
 * Return: void
 */

void print_most_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 14; y++)
		{
			if (y >= 9)
				_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
