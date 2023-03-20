#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * description - print all single digit of base 10
 * starting from 0, followed by a newline
 * return 0
**/

int main(void)
{
	int m;
	for (m = '0'; m <= '9'; m = m++)
	{
		putchar(m);
	}
	for (m = 'a'; m <= 'f'; m = m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
