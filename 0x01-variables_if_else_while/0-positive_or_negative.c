#include <stdlib.h>

#include <time.h>
#include <stdio.h>

/* more headers goes there */



/* betty style doc for function main goes there */
/**
 * main - entry point
 * description: print string to type of random output
 * return: 0
**/
int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if(n > 0)
					{
						puts("is positive")
							};
					else if(n == 0)
					{
						puts("is zero")
					}; else(n < 0)
					{
						puts("is negative")
					};

					return (0);

}
