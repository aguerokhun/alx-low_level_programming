#include <stdio.h>

int main()
{
	for(int x = 'A'; x <= 'Z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	putchar('\n')
	return 0;
}
