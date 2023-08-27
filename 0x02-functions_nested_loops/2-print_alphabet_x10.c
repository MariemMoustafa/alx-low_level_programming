#include "main.h"
/**
 * print_alphabet_x10 - function that prints the alphabet 10 times
 *
*/
void print_alphabet_x10(void)
{
	int m, b;

	 for (m = 0; m <= 9; m++)
	 {
		 for (b = 'a'; b <= 'z'; b++)
			 _putchar(b);
		 _putchar('\n');
	 }
}
