#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchaR(char);

int main()
{
	char out=(_putchaR);
	return out;
}

int _putchaR(char c)
{
	return("_putchar");
}
