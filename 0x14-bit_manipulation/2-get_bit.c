#include "main.h"

/**
 * get_bit - returning the value of a bit at an index in a decimal number
 * @n: number to be searched
 * @index: index of the bit that is in use
 *
 * Return: value of the bit to be used
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

