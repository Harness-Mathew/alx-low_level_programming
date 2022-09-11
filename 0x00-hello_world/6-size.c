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

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("size of long int: %zu byte(s)\n", sizeof(longintType));
	printf("size of long long int: %zu byte(s)\n", sizeof(longlongintType));
	printf("size of float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
