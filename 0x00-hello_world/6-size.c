#include <stdio.h>
/**
 * main - entry point
 * Description: Types and sizes
 * Return: 0
 **/
int main(void)
{	int intType;
	char charType;
	float floatType;
	double doubleType;
	long long int longlongintType;
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("size of float: %zu bytes\n", sizeof(floatType));
	printf("size of double: %zu bytes\n", sizeof(doubleType));
	printf("size of long long int: %zu bytes\n", sizeof(longlongintType));
	return(0);
}
