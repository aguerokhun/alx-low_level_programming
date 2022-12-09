#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (int x = 'A'; x <= 'F'; x++)
	{
		int lower_x = tolower(x);

		putchar(lower_x);
	}
	putchar('\n');
	return (0);
}
