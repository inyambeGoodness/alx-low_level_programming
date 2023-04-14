#include <stdlib.h>
/**
  * malloc_checked - is a function that allocates memory using malloc.
  * @b: the size of memory to be allocated.
  *
  * Return: a pointer to allocated memory.
  */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
