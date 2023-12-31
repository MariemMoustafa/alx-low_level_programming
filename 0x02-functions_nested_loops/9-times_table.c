#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example table
 * 0,0,0,0, ..
 * 0,1,2,3, ..
 */
void times_table(void)
{
	int num, min, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (min = 1; min <= 9; min++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * min;

			/*
			 *
			 * put space if product is a single number
			 * place the first digit if its two number
			 */
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48); /*get the first digit*/

			_putchar((prod % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}
