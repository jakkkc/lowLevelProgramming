#include "main.h"
/**
 * print_alphabet - wirte the the lower-case alphabet on a line.
 *
 *Return: alphabet and new line
 *
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}

