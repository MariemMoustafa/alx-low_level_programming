#include "main.h"
/**
 * puts2 _ prints every character of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
