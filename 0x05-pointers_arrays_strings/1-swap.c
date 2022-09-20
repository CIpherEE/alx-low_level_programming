#include "main.h"
#include <stdio.h>

/**
 * void swap_int - swaps values
 * @a: First int.
 * @b: Second int.
 */

int void swap_int(int *a, int *b)
{
	int a_h;

	a_h = *a;
	*a = b;
	*b = a_h;

}
