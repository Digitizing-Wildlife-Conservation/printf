#include "main.h"

/**
 * print_integer - Print a number in base 10
 * @list: Number to print in base 10
 * OdenyiMuchai Alias OM
 * Return: Length of th numbers in decimal
 **/
int print_integer(va_list list)
{
	char *p_buffom;
	int sizeom;

	p_buffom = itoa(va_arg(list, int), 10);

	sizeom = print((p_buffom != NULL) ? p_buffom : "NULL");

	return (sizeom);
}

