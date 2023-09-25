#include <stdio.h>
/*headers go here*/
/**
 * main - All programme go here
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
