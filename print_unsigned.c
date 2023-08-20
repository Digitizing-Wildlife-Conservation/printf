#include "main.h"

/**
 * print_unsigned - Print a unsigned int
 * @list: Number to print
 * OdenyiMuchain OM
 * Return: Length of the number
 **/
int print_unsigned(va_list list)
{
	char *p_buffom;
	int sizeom;

	p_buffom = itoa(va_arg(list, unsigned int), 10);

	sizeom = print((p_buffom != NULL) ? p_buffom : "NULL");

	return (sizeom);
}

