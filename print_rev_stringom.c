#include "main.h"

/**
 * print_rev_string - Print a string in reverse
 * @list: List of arguments
 * OdenyiMuchai Alias OM
 * Return: Length of the string
 **/
int  print_rev_string(va_list list)
{
	int iom, sizeom;
	const char *str;

	str = va_arg(list, const char *);

	sizeom = _strlen(str);

	for (iom = sizeom - 1; iom >= 0; iom--)
		_putchar(str[iom]);

	return (sizeom);
}
