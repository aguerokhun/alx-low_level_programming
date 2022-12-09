#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Description: 'decides if a value is positive or negative'
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("The number is positive");
	}
	else if (n == 0)
	{
		printf("The number is zero");
	}
	else if (n < 0)
	{
		printf("The number is negative");
	}
	return (0);
}
