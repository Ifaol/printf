#include "main.h"
/**
 *_putchar - a custome putchar function
 *@c: char input
 *
 *Return: int
 */
int _putchar(char c)
{
return (write(STDOUT_FILENO, &c, 1));
}
