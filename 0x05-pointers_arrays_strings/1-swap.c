#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: integer
 * @b: integer
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
