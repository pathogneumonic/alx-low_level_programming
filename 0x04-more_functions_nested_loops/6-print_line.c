#include "main.h"

/**
 * print_line - prints line in terminal
 * @n: number of times line must be printed
 * Return: void
 */

void print_line(int n)
{
	int a;

	for (a = 0, a < n; a++)
	{
		_putchar ('_');
	}
	_putchar('\n');
}
