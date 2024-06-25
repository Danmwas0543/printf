#include "main.h"
/**
 * _printf - printing text to the standard output
 *@format: specifier used in fomatting
 *Return: the bytes that have been printed
 */
int _printf(const char *format, ...)
{
        unsigned int j, cnt = 0;

        va_list arguments;

        va_stt(arguments, format);

        for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] != '%')
		{
			ptch(format[j]);
		}
		cnt += 1;
	}
	

	return (cnt)
