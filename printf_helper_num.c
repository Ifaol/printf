#include "main.h"
/**
 *printf_helper_num - a printf helper for int and double cases
 *@ptr: input pointer
 *@args: input args
 *@chars_written: int input
 *
 *Return: number of digits printed
 */
int printf_helper_num(const char *ptr, va_list args, int chars_written)
{
int i;
double d;
ptr++;
if (*ptr == 'i')
{
i = va_arg(args, int);
chars_written = printf_helper_ints(i, chars_written);
}
else if (*ptr == 'd')
{
d = va_arg(args, double);
chars_written = printf_helper_doubles(d, chars_written);
}
return (chars_written);
}
