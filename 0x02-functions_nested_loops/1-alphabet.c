#include <stdio.h>
/**
 * main - entry point
 * Description: print all alphabets
 * Return: 0
**/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
