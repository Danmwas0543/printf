#include "main.h"
/**
 * ptch - displays a character to the stdout
 * @c: charcater which is being printed
 * Return: on success (1)
 */
int ptch(char c)
{
	return (write(1, &c, 1));
}
