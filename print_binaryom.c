#include "main.h"

/**
 * print_binary - Print a number in base 2
 * @list: Number to print in base 2
 * OdenyiMuchai Alias OM
 * Return: Length of the numbers in binary
 **/
int print_binary(va_list list)
{
	char *p_buffom;
	int sizeom;

	p_buffom = itoa(va_arg(list, unsigned int), 2);

	sizeom = print(p_buffom);

	return (sizeom);
}
