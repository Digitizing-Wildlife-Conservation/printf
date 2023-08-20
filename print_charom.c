#include "main.h"
/**
 * print_char - print char.
 * @list: va_list.
 * OdenyiMuchai Alias OM
 * Return: 1
 */
int print_char(va_list list)
{
	int auxom;

	auxom = va_arg(list, int);

	_putchar(auxom);

	return (1);
}
