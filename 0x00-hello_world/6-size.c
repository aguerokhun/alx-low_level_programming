#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int integerType;
	float floatType;
	long longintType;
	char charType;
	long longlongintType;

	/*Sizeof operator is used to evaluate the size of a variable*/
	printf("Size of char: %d byte(s)\n", sizeof(charType));
	printf("Size of int: %d byte(s)\n", sizeof(integerType));
	printf("Size of long int: %d byte(s)\n", sizeof(longintType));
	printf("Size of long long int: %d byte(s)\n", sizeof(longintType));
	printf("Size of float: %d byte(s)\n", sizeof(floatType));
	return (0);
}
