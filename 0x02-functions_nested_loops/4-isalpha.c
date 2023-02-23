#include "main.h"

/**
 * _isalpha - Write a function that checks for alphabetic character
 * @c: input character
 * Return: 1 success 0 otherwise
 */

int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper  = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
			{
				isletter = 1;
			}
		}
	}
	return (isletter);
}
