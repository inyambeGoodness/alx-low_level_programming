#include "main.h"

/**
 * _pow_recursion - Returns the power of x to y
 * @x: to be teturned
 * @y: power to be raised to
 * Return: the function
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
