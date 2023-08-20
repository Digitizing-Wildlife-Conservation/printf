#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: String to enconde
 * OdenyiMuchai Alias OM
 * Return: String encode
 */
int rot13(char *s)
{
	int iom, jom;
	char *normalom, *rot13om;

	normalom = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13om = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (iom = 0; s[iom] != '\0'; iom++)
	{
		for (jom = 0; normalom[jom] != '\0'; jom++)
		{
			if (s[iom] == normalom[jom])
			{
				_putchar(rot13om[jom]);
				break;
			}
		}

		if (!normalom[jom])
			_putchar(s[iom]);
	}
	return (iom);
}

/**
 * print_rot - Prints the rot13'ed string
 * @list: String to encoded
 * OdenyiMuchai Alias OM
 * Return: Length of the string encoded
 **/
int print_rot(va_list list)
{
	char *pom;
	int p_lenom;

	pom = va_arg(list, char *);
	p_lenom = rot13((pom != NULL) ? pom : "(ahyy)");

	return (p_lenom);
}

