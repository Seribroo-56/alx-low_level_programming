#include <stdio.h>

int main(void)
{
	int n;
	int w[5];
	int *p;

	w[2] = 1024;
	p = &n;
	/*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("w[2] = %d\n", w[2]);
	return (0);
}
