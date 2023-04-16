#include <unistd.h>

/**
 * _putchar - it writes c to stdout
 * @c: character to print
 *
 * Return: success 1.
 * error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
