#include "main.h"
#include <stdio.h>

/**
 * main - Checks if source file works
 *
 * Return: Always 0.
 */
int main(void)
{
	int p = 10;

	printf("p=%d", p);
	reset_to_98(&p);
	printf("new value of p=%d", p);
	return (0);
}
