#include "main.h"

/**
 * print_sign - Description if yhe input number
 * greater, iqual or less than zero.
 *
 * @n: The input numberv as an integer.
 *
 * Return: 1 is greater than zero. 0 is zero.
 * -1 is less than ero. 0 is zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n > 0)
        {
                _putchar(45);
                return (-1);
        }
	else
	{
		_putchar(48);
                return (0);
	}
	_putchar('\n');
}
