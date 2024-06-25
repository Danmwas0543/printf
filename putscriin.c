#include "main.h"
/**
 * putscriin - printing oua text
 * @c: text being printed
 * Return: bytes being printed
 */
int putscriin(char *c)
{
	int cout = 0;

	if (c)
	{
		for (cout = 0; c[cout] != '\0'; cout++)
		{
			ptch(c[cout]);
		}
	}
	return (cout);
}
