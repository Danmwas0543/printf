#include "main.h"
/**
 * print_string - print string
 * @str: string input
 *
 * Return: number of bytes of string printed
 */
int print_string(char *str)
{
    int k;

    for (k = 0; str[k] != '\0'; k++)
    {
        custom_putchar(str[k]);
    }
    return (k);
}
