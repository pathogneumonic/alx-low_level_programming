#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * Return: Always 0
 */

void print_alphabet_x10(void);
{
	char x;
	int y;

	for (y = 0; y <= 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_putchar('/n');
	}
	return (0);
}
