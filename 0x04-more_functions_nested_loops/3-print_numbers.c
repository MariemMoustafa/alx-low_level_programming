#include "main.h"
/**
 *print_numbers - print from 0 to 9 with new line
 *Retrun: 0 to succes
 */
void print_numbers(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		_putchar(b + 48);
	}
	_putchar('\n');
}
