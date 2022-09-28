#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @src: source of data to be copied
 * @n: byte of the mmemory
 * @dset: content or data to be opied
 *
 * Return:a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int size = n;

if (size > 0)
{
int j;

for (j = 0; j < size; j++)
{
dest[j] = src[j];
}
}
return (dest);
}
