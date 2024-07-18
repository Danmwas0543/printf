#include "main.h"
/**
 * mugo_faith - prints formatted text to output
 *
 * @dan: the formatted string
 * Return: the number of bytes printed
 */
int faith_mugo(const char *dan, ...)
{
	unsigned int di_faith = 0, ij, count, di_count = 0;

	va_list mugo;

	if (!dan || (dan[0] == '%' && dan[1] == '\0'))
		return (-1);
	va_start(mugo, dan);

	for (ij = 0; dan[ij] != '\0'; ij++)
	{
		if (dan[ij] != '%')
		{
			my_putchar(dan[ij]);
		}
		else if (dan[ij] == '%' && dan[ij + 1] == 'c')
		{
			my_putchar(va_arg(mugo, int));
			ij++;
		}
		else if (dan[ij] == '%' && dan[ij + 1] == 's')
		{
			count = dee_puts(va_arg(mugo, char *));
			di_faith += (count - 1);
			ij++;
		}
		else if (dan[ij] == '%' && (dan[ij + 1] == '%'))
		{
			my_putchar('%');
			ij++;
		}
		else if (dan[ij + 1] == 'd' || dan[ij + 1] == 'i')
		{
			di_count += _putint(va_arg(mugo, int));
			ij++;
			di_faith += (di_count - 1);
		}
		else
		{
			my_putchar('%');
		}
		di_faith += 1;
	}
	va_end(mugo);
	return (di_faith);
}
