#include "main.h"

/**
 * print_alphabet - a program that prints alphabet
 * Return: 0 always
 */

void print_alphabet(void)
{
	char c;

	c = 'a'; 
	
	while(c <= 'z') 
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
