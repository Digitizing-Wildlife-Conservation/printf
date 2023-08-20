#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * OdenyiMuchai Alias OM
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (buffer(c));
}

/**
 * buffer - Save the character in a buffer
 * @c: Character
 *
 * Return: 1
 **/
int buffer(char c)
{
	static char buffering[1024];
	static int iom;

	if (c == -1 || iom == 1024)
	{
		write(1, buffering, iom);
		iom = 0;
	}

	if (c != -1)
		buffering[iom++] = c;

	return (1);
}
