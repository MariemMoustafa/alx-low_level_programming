#include "main.h"

/**
 * *_strpbrk - searches a string of any of set of byte
 * @s: string
 * @accept: string to match
 * Return: pointer to byte in s the matches one of bytes in accept
 * on NULL no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int m, t;
	char *p;

	m = 0;
	while (s[m] != '\0')
	{
		t = 0;
		while (accept[t] != '\0')
		{
			if (accept[t] == s[t])
			{
				p = &s[m];
				return (p);
			}
			t++;
		}
		m++;
	}
	return (0);
}
