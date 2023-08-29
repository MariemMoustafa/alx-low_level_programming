#include "main.h"
/**
 * _strspn - gets the ength of a prefix substring.
 *
 * @s : string.
 * @accept: bytes.
 * Return: unsigned int.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int t, m;

	for (t = 0; s[t] != '\0'; t++)
	{
		for (m = 0; accept[m] != s[m]; m++)
		{
			if (accept[m] == '\0')
				return (t);
		}
	}
	return (t);
}
