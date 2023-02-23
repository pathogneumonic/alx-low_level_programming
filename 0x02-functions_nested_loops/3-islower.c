#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character
 * @c integer value
 * Return: 1 if lowercase otherwise 0
 */

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
		return (1);
		}
		return (0);
	}
}
