#include "main.h"

/**
 * _strlen_recursion - Is a function that returns the length of a string
 * @strn: is the string whose length to calc.
 *
 * Return: the length of strn
 */
int _strlen_recursion(char *strn)
{
	if (*strn == '\0')
		return (0);
	return (1 + _strlen_recursion(strn + 1));
}
