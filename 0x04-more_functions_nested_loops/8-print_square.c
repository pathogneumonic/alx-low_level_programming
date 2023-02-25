#include "main.h"

/**
 * print_square - prints a square
 * @size: an argument
 * Return: void
 */

void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0, y < size; y++)
		{
			_putchar('#');
		}
		if (x == 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
