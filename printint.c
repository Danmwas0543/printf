#include "main.h"
/**
 * _putint - print integer
 *
 * @in: input number
 * Return: int
 */
int _putint(int in)
{
    int j = 0;

    if (in < 0)
    {
        j += custom_putchar('-');
        in = -in;
    }

    if (in / 10 != 0)
    {
        j += _putint(in / 10);
    }
    j += custom_putchar('0' + (in % 10));
    return (j);
}
