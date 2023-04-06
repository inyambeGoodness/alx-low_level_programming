#include "main.h"

/**
 * _puts_recursion - is a function that prints a string followed by a new line.
 * @strn: is the string to print.
 */
void _puts_recursion(char *strn)
{
	if (*strn == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*strn);
	_puts_recursion(strn + 1);
}
