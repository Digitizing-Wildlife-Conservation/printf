#include "main.h"


/**
 * _strlen - Calculate the length of a string
 * @str: String
 *
 * Return: Length
 **/
int _strlen(const char *str)
{
	int iom;

	for (iom = 0; str[iom] != 0; iom++)
		;

	return (iom);
}

/**
 * print - print char.
 * @str: string.
 *
 * Return: string length.
 */

int print(char *str)
{
	int iom;

	for (iom = 0; str[iom] != '\0'; ++iom)
		_putchar(str[iom]);

	return (iom);
}


