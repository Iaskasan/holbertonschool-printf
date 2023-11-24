#include "main.h"

/**
 * _printf - the printf function
 * @format: format string containing conversion specifiers
 * Return: size of formated string
 */

int _printf(const char *format, ...)
{
    int i = 0;
    int len = 0;
    int result;

    va_list args;

    va_start(args, format);

    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
    {
        return (-1);
    }
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            result = format_handler(format[i + 1], args);

            if (result == NULL)
            {
                len += _putchar(format[i]);
                len += _putchar(format[i + 1]);
            }
            else
                len += result;
            i += 2;
        }
        else
        {
            len += _putchar(format[i]);
            i++;
        }
    }

    va_end(args);

    return (len);
}
