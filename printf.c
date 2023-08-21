#include "main.h"
/**
 *_putin - _printf helper function for cases int and double
 *@num: int input
 *
 *Return: Void
 */
void _putin(int num)
{
char *buffer = NULL;
int i, idx = 0, temp = num, ct = 0;
if (num == 0)
{
_putchar('0');
return;
}
while (temp > 0)
{
temp /= 10;
ct++;
}
buffer =(char *)malloc((ct + 1) * sizeof(char));
if (buffer == NULL)
{
return;
}
if (num < 0)
{
_putchar('-');
num = -num;
}
while (num > 0)
{
buffer[idx++] = '0' + (num % 10);
num /= 10;
}
for (i = idx - 1 ; i >= 0 ; i--)
{
_putchar(buffer[i]);
}
free(buffer);
}
#include "main.h"
/**
 *_printf - a custome printf function
 *@format: const char pointer input
 *
 *Return: no of chars written
 */
int _printf(const char *format, ...)
{
int num, chars_written = 0;
const char *ptr = format;
char *s, c;
va_list args;
va_start(args, format);
while (*ptr != '\0')
{
if (*ptr == '%')
{
ptr++;
if (*ptr == 'c')
{
c = va_arg(args, int);
_putchar(c);
chars_written++;
}
else if (*ptr == 's')
{
s = va_arg(args, char *);
while (*s != '\0')
{
_putchar(*s);
s++;
chars_written++;
}
}
else if (*ptr == 'd' || *ptr == 'i')
{
num = va_arg(args, int);
_putin(num);
chars_written++;
}
}
else
{
_putchar(*ptr);
chars_written++;
}
ptr++;
}
va_end(args);
return (chars_written);
}
