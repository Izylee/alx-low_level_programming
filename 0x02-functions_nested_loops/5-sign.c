#include "main.h"

/**
* print_sign - Printd the sign of a number
* @n: The number to be checked
* Return: 1 for positive run, -1 for negative run or zero for anythiig else
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}


