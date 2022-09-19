#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: change pointer address
 * Return: 0
**/
int main(void)
{
	int n;
	int *p;

	n = 402;
	*p = &n;
	p = 98;
	return (0);
}
