TechByDami
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x04-more_functions_nested_loops/9-fizz_buzz.c
@TechByDami
TechByDami Print Fizz-Buzz in 1 to 100 🌍🏆🇳🇬🔥
 1 contributor
Executable File  30 lines (26 sloc)  595 Bytes

#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, But for multiples of three
 * print Fizz instead of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("Buzz");
		else if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
