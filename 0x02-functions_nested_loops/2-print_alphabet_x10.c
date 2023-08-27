#include "main.h"
/**
 * print_alphabet_x10 - function that prints the alphabet 10 times
 *
*/
void print_alphabet_x10(void)
{
	int m, t;

	 for (m = 0; m <= 9; m++)
	 {
		 for (t = 'a'; t = 'z'; t++)
			 _putchar(t);
		 _putchar('\n');
	 }
}
