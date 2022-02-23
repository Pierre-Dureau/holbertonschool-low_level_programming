#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: Int
 * @y: Int
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	int nb = 0;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	y--;
	nb = _pow_recursion(x, y) * x;

	return (nb);
}
