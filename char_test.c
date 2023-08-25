#include "main.h"
/**
 *char_test - character checker function
 *@ptr: input pointer
 *
 *Return: 1 if found and 0 else
 */
int char_test(const char *ptr)
{
ptr++;
if (*ptr == '\0' || *ptr == 'c' || *ptr == 's' || *ptr == '%')
{
return (1);
}
else
{
return (0);
}
}
