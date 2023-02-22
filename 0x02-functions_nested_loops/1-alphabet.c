#include "main.h"

/**
 * print_alphabet - a program that prints alphabet
 * Return: 0 always
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
	return (0);
}
