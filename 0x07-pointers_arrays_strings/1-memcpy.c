#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @src: source
 * @n: byte
 * @dset: content
 *
 * Return:apointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n) /* declaring while */
{
*(dest + i) = *(src + i); /* add 1 position dest and src */
i++;
} /* end While */
return (dest);
}
