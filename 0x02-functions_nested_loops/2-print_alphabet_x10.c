#include "main.h"

/**
 * print_alphabet_x10 - write the the lower-case alphabet on a line.
 *
 */
void print_alphabet_x10(void)
{
	char string;
	int i;

	for (i = 0; i < 10 ; i++)
	{
		for (string = 'a' ; string <= 'z' ; string++)
		{
			_putchar(string);
		}
		_putchar('\n');
	}
}

