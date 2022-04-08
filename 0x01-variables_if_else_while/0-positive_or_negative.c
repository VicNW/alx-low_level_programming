#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
* function main - assigns a random number to int n
* for numbers > zero, n is positive
* for numbers < zero, n is negative
* for numbers == 0 n is zero
* return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	printf("%d is negative\n", n);
	return (0);
}
