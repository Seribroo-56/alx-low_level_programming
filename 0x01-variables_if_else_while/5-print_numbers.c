#include <stdio.h>

/**
* main - Print base 10 digits 0-9
*
* Return: int 0
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	printf("%i", digit);
	putchar('\n');

	return (0);
}
