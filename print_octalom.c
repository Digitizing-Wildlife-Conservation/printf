#include "main.h"

/**
 * print_octal - Print a unsigned octal
 * @list: Number to print
 * OdenyiMuchai Alias OM
 * Return: Length of the number
 **/
int print_octal(va_list list)
{
	char *p_buffom;
	int sizeom;

	p_buffom = itoa(va_arg(list, unsigned int), 8);

	sizeom = print((p_buffom != NULL) ? p_buffom : "NULL");

	return (sizeom);
}

