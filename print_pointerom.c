#include "main.h"
#include <stdio.h>

int _strcmp(char *, char *);

/**
 * print_pointer - Print a number in hexadecimal format
 * @list: Number to print
 * OdenyiMuchai Alias OM
 * Return: Length of the number
 **/
int print_pointer(va_list list)
{
	char *p_buffom;
	int sizeom;

	p_buffom = itoa(va_arg(list, unsigned long int), 16);

	if (!_strcmp(p_buffom, "0"))
		return (print("(nil)"));

	sizeom = print("0x");

	if (!_strcmp(p_buffom, "-1"))
		sizeom += print("ffffffffffffffff");
	else
		sizeom += print(p_buffom);

	return (sizeom);
}

/**
 * _strcmp - Compare two strings
 * @s1: String 1
 * @s2: String 2
 * OdenyiMuchai Alias OM
 * Return: Integer
 **/
int _strcmp(char *s1, char *s2)
{
	int iom;

	for (iom = 0; s1[iom] != '\0'; iom++)
	{
		if (s1[iom] != s2[iom])
			return (s1[iom] - s2[iom]);
	}

	return (0);
}


