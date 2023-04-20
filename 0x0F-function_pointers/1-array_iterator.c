#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function
 * @array: the given array
 * @size: the size of the array
 * @action: a pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < (int) size; i++)
{
action(array[i]);
}
}
