#include <stdio.h>

/**
* main - Print the alphabet in lowercaser not  e and q
*
* Return: int 0
*/
int main(void)
{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
		}
		putchar('\n');

	return (0);
}
