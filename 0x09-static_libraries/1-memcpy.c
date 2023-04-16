#include "main.h"
/**
 *_memcpy - it is a function that copies memory area
*@dest: memory where it is stored
*@src: memory where it is copied
*@n: number of bytes n
*
*Return: the copied memory with n byted changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int k = 0;
int i = n;
for (; k < i; k++)
{
dest[k] = src[k];
n--;
}
return (dest);
}
