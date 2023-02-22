#include "main.h"

/**
 * print_alphabet - a program that prints alphabet
 * Return: 0 always
 */

void print_alphabet(void);
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('/n');
	return (0);
}
