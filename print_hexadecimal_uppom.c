#include "main.h"

int is_lowercase(char);
char *string_to_upper(char *);

/**
 * print_hexadecimal_upp - Print a number in hexadecimal format
 * @list: Number to print
 * OdenyiMuchai Alias OM
 * Return: Length of the number
 **/
int print_hexadecimal_upp(va_list list)
{
	char *p_buffom;
	int sizeom;

	p_buffom = itoa(va_arg(list, unsigned int), 16);
	p_buffom = string_to_upper(p_buffom);

	sizeom = print((p_buffom != NULL) ? p_buffom : "NULL");

	return (sizeom);
}

/**
 * is_lowercase - Check if the character are in lowercase
 * @c: Character
 * OdenyiMuchai Alias OM
 * Return: 1 or 0
 **/
int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * string_to_upper - Change the string to uppercase
 * @s: String
 * OdenyiMuchai Alias OM
 * Return: String uppercase
 **/
char *string_to_upper(char *s)
{
	int iom;

	for (iom = 0; s[iom] != '\0'; iom++)
	{
		if (is_lowercase(s[iom]))
		{
			s[iom] = s[iom] - 32;
		}
	}

	return (s);
}


