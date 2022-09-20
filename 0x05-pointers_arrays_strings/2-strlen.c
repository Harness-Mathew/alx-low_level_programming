#include <string.h>
#include <stdio.h>
int _strlen(char *);
/**
 * main -entry point
 * Description: print string length
 * Return: 0
**/
int main(void)
{
	char *str;
	int len;

	str = "Holberton";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
