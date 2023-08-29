#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
	int m, l;

	for (l = 0; l <= 23; l++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((l / 10) + 48);
			_putchar((l % 10) + 48);
			_putchar(':');
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
		}
	}
}
