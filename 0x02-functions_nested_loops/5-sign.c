#include "main.h"

/**
 * print_sign - Write a function that prints the sign of a number
 * Return: 1 if n greater than 0, -1 if n less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
