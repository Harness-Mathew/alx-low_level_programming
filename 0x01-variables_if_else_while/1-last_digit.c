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
		int m;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
				m = n % 10;

				if (m > 5)
					printf("Last digit of n is %d and is greater than 5\n", m);
					/* your code goes there */
				else if (m == 0)
					printf("Last digit of n is %d\n", m);
				else(m < 5)
					printf("Last digit of n is %d and is less than 6 and not 0\n", m);
				return (0);

}
