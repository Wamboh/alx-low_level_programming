#include "main.h"

/**
 * print_numbers - print the numbers from 0 up to 9
 * Return: the number from 0 up to 9
 */

void print_numbers(void)
{
	int y;

	for (y = 0; y <= 9; y++)
	{
	_putcher(y + 0);
	}
	_putcher("\n");
}
