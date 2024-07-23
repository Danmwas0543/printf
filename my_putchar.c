#include "main.h"
/**
 * custom_putchar - prints a character
 *
 * @ch: character input
 * Return: 1
 */
int custom_putchar(char ch)
{
    return (write(1, &ch, 1));
}
