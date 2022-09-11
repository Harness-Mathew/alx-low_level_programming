#include <stdio.h>
/**
 * main - entry point
 * Description: Types and sizes
 * Return: 0
 **/

int main(void)
{	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of int: %zu bytes\n", sizeof(charType));
	printf("Size of char: %zu bytes\n", sizeof(intType));
	printf("size of float: %zu bytes\n", sizeof(longintType));
	printf("size of double: %zu bytes\n", sizeof(longlongintType));
	printf("size of long int: %zu bytes\n", sizeof(floatType));
	return (0);
}
