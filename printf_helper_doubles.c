#include "main.h"
/**
 * printf_helper_doubles - print doubles function
 *@d: double input
 *@chars_written: int input
 *
 *Return: no of digits printed
 */
int printf_helper_doubles(double d, int chars_written)
{
int intPart, numDecimals, digit;
double num = d, fracPart;
if (num < 0)
{
_putchar('-');
chars_written++;
num = -num;
}
intPart = (int)num;
chars_written = printf_helper_ints(intPart, chars_written);
_putchar('.');
chars_written++;
fracPart = num - intPart;
numDecimals = 6;
while (numDecimals > 0)
{
fracPart *= 10;
digit = (int)fracPart;
_putchar(digit + '0');
chars_written++;
fracPart -= digit;
numDecimals--;
}
return (chars_written);
}
