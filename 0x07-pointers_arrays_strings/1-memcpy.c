#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 *
 * Return: the pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int mth;

	for (mth = 0; mth < n; mth++)
	{
		dest[mth] = src[mth];
	}
	return (dest);
}
