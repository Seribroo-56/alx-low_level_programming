#include <stdio.h>

/**
* main - Print the hexadecimal numbers-letters  in lowercase
*
* Return: int 0
*/
int main(void)
{
		char digit;

		for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);

		for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);

		putchar('\n');

	return (0);
}
