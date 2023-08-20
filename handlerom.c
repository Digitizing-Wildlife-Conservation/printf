#include "main.h"

/**
 * handler - Format controller
 * @str: String format
 * @list: List of arguments
 *
 * Return: Total size of arguments with the total size of the base string
 **/
int handler(const char *str, va_list list)
{
	int sizeom, iom, aux;

	sizeom = 0;
	for (iom = 0; str[iom] != 0; iom++)
	{
		if (str[iom] == '%')
		{
			aux = percent_handler(str, list, &iom);
			if (aux == -1)
				return (-1);

			sizeom += aux;
			continue;
		}

		_putchar(str[iom]);
		sizeom = sizeom + 1;
	}


	return (sizeom);
}

/**
 * percent_handler - Controller for percent format
 * @str: String format
 * @list: List of arguments
 * @i: Iterator
 *
 * Return: Size of the numbers of elements printed
 **/
int percent_handler(const char *str, va_list list, int *i)
{
	int size, jom, number_formats;
	format formats[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_integer}, {'i', print_integer},
		{'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal_low},
		{'X', print_hexadecimal_upp}, {'p', print_pointer},
		{'r', print_rev_string}, {'R', print_rot}
	};

	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	number_formats = sizeof(formats) / sizeof(formats[0]);
	for (size = jom = 0; jom < number_formats; jom++)
	{
		if (str[*i] == formats[jom].type)
		{
			size = formats[jom].f(list);
			return (size);
		}

	}

	_putchar('%'), _putchar(str[*i]);

	return (2);
}


