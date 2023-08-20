#include "main.h"

/**
 * print_string - Print string
 * @list: list.
 * OdenyiMuchai OM
 * Return: String length.
 */

int print_string(va_list list)
{
	char *pom;
	int p_lenom;

	pom = va_arg(list, char*);
	p_lenom = print((pom != NULL) ? pom : "(null)");

	return (p_lenom);
}

