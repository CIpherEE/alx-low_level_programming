#include <stdio.h>
#include "main.h"

/**
 * main - Entry poimt to code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int a;
	int b;

	a = 10;
	b = 20;

	printf("Value of a is :%d while value for b is :%d", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
