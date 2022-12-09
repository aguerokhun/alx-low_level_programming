#include <stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower_x;

	for (int x = 'A'; x <= 'Z'; x++)
	{
		if (x != 'Q' && x != 'E')
		{
			lower_x = tolower(x);
			putchar(lower_x);
		}
	}
	putchar('\n');
	return (0);
}
