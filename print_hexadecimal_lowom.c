#include "main.h"

/**
 * print_hexadecimal_low - Print a number in hexadecimal format
 * @list: Number to print
 * OdenyiMuchai Alias OM
 * Return: Length of the number
 **/
int print_hexadecimal_low(va_list list)
{
	char *p_buffom;
	int sizeom;

	p_buffom = itoa(va_arg(list, unsigned int), 16);

	sizeom = print((p_buffom != NULL) ? p_buffom : "NULL");

	return (sizeom);
}

