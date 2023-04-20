#include "function_pointers.h"
#include<stdlib.h>
/**
 * print_name - it prints a name
 * @name: a person's name
 * @f: a pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
