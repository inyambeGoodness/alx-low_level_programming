#include "main.h"

/**
 * _print_rev_recursion - Is a function that prints a string in reverse
 * @strn: is the string to print
 */
void _print_rev_recursion(char *strn)
{
	if (*strn)
	{
		_print_rev_recursion(strn + 1);
		_putchar(*strn);
	}
}
