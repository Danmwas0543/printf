#include "main.h"
/**
 * _printf - printing text to the standard output
 *@format: specifier used in fomatting
 *Return: the bytes that have been printed
 */
int _printf(const char *format, ...)
{
	unsigned int j, string_cout, cnt = 0;

	va_list arguments;

	va_start(arguments, format);

	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] != '%')
		{
			ptch(format[j]);
		}
		else if (format[j + 1] == 'c')
		{
			ptch(va_arg(arguments, int));
			j++;
		}
		else if (format[j + 1] == 's')
		{
			string_cout = putscriin(va_arg(arguments, char *));
			j++;
			string_cout += (string_cout -1);
		}
		else if (format[j + 1] == '%')
		{
			ptch('%');
		}
		cnt += 1;
	}

	va_end(arguments);
	return (cnt);

}
