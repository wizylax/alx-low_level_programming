#!/bin/bash 
gcc -c $CFILE

#include <stdlib.h>
#include <time.h>

/**
 * main - Prints a random number and states whether 
 *	   it is positive, negative or zero 
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

		if (n > 1)
		{
			printf("%i is positive\n", n);
		}
		
		else if ( n < 0)
		{
			printf("%i is negarive\n", n);
		}

		else
		{
			printf("%i is zero\n", n);
		}
		
	return (0);
}
