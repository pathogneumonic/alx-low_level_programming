#include "main.h"

/**
 * _pow_recursion - value of x raised to power y.
 * @x: base.
 * @y: exponent.
 * Return: value of exponentitation
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
