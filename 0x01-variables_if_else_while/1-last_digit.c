#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */
/**
 * main - entry point
 * description: print if
 * return: 0
**/
int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

				if(n%10 > 5)
				{
					printf("Last digit of n is %d and is greater than 5,n%10");
				}	/* your code goes there */
				else(n%10 < 5)
				{
					printf("Last digit of n is %d and is lesser than 5,n%10");
				}

					return (0);

}
