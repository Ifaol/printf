#include "main.h"
/**
 *printf_helper_ints - print ints function
 *@i: int input
 *@chars_written: int input
 *
 *Return: no of digits printed
 */
int printf_helper_ints(int i, int chars_written)
{
int index = 0, num = i;
char digits[10];
if (num < 0)
{
_putchar('-');
chars_written++;
num = -num;
}
if (num == 0)
{
_putchar('0');
chars_written++;
return (chars_written);
}
while (num > 0)
{
digits[index++] = num % 10 + '0';
num /= 10;
}
while (index > 0)
{
_putchar(digits[--index]);
chars_written++;
}
return (chars_written);
}
