#include "sort.h"

/**
 * print_int - prints integers
 * @n: The integer to be printed
 *
 * Return: Nothing
 */
void print_int(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		return;
	print_int(n / 10);
	_putchar('0' + n % 10);
}

/**
 * _putchar - prints a character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * Otherwise return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
