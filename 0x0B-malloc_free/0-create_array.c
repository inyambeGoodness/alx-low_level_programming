#include <stdlib.h>
#include "main.h"

/**
 * *create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: it is the size of the array to be created.
 * @c: char value to initialize the array c.
 *
 * Return: the pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
