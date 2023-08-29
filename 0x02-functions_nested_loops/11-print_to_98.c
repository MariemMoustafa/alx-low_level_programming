#include "main.h"

/**
 * print_to_98 - print n to 98 counts
 *		separated by comma, followed
 *		by space and number should be
 *		printed in order
 * @n: input
 */

void print_to_98(int n)
{
	int mth;

	if (n > 98)
		for (mth = n; mth > 98; mth--)
			printf("%d, ", mth);
	else
		for (mth = n; mth < 98; mth++)
			printf("%d, ", mth);
	printf("98\n");
}
