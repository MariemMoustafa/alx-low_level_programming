#include "main.h"
/**
 * _strcat - function that concatenates
 *          two srings
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int c, c1;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/*lterate through each other src array value without the null byte*/
	for (c1 = 0; src[c1] ; c1++)
		/*append src[c1] to dest[c] while overwritting the null byte in dest*/
		dest[c++] = src[c1];

	return (dest);
}
