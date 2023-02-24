#include "main.h"
#include <stdio.h>

/**
 * _isupper(int c) - Write a function that checksfor uppercase character
 * @c: argument
 * Return: 1 if uppercase,0 if otherwise
 */

int _isupper(int c)
{
	char c;

	if (c == 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
