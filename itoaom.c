#include "main.h"

/**
 * itoa - integer to ascii
 * @num: num
 * @base: base
 * OdenyiMuchai Alias OM
 * Return: char
 * https://github.com/Digitizing-Wildlife-Conservation/printf
 **/
char *itoa(long int num, int base)
{
	static char *arrayom = "0123456789abcdef";
	static char buffer[50];
	char signom = 0;
	char *ptrom;
	unsigned long nom = num;

	if (num < 0)
	{
		nom = -num;
		signom = '-';
	}
	ptrom = &buffer[49];
	*ptrom = '\0';

	do      {
		*--ptrom = arrayom[nom % base];
		nom /= base;
	} while (nom != 0);

	if (signom)
		*--ptrom = signom;
	return (ptrom);
}

