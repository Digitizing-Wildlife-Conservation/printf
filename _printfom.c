#include <stdarg.h>
#include "main.h"

/**
 *_printf - prints to output according to format
 *@format: character string
 *OdenyiMuchai Alias OM
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int iom = 0, jom = 0;
	int (*fom)(va_list);
	va_list args;

	va_start(args, format);
	if (format == NULL || !format[iom + 1])
		return (-1);
	while (format[iom])
	{
		if (format[iom] == '%')
		{
			if (format[iom + 1])
			{
				if (format[iom + 1] != 'c' && format[iom + 1] != 's'
				&& format[iom + 1] != '%' && format[iom + 1] != 'd'
				&& format[iom + 1] != 'i')
				{
					jom += _putchar(format[iom]);
					jom += _putchar(format[iom + 1]);
					iom++;
				}
				else
				{
					fom = get_func(&format[iom + 1]);
					jom += f(args);
					iom++;
				}
			}
		}
		else
		{
			_putchar(format[iom]);
			jom++;
		}
		iom++;
	}
	va_end(args);
	return (jom);
}
