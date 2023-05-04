#include "main.h"

/**
 * get_bit - the value of a bit
 * @n: the decimal parameter
 * @index: the index
 * Return: the val
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
