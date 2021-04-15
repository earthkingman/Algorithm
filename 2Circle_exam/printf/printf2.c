#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != 0)
    {
        i++;
    }
    return (i);
}

int get_integer(char **s)
{
    int value = 0;
    
    while (*s >= '0' && *s <= '9')
    {
        value = (value * 10) + (*s - '0');
        *s++;
    }
    return value;
}

int handle_specific(char **s, va_list ap)
{
    int width = 0;
    int prec= -1;
    int len = 0;
    int done = 0;
    int minus = 1;
    int base;
    long long int s_num;
    unsigned long long int u_num;
    unsigned long long int temp = 0;
    char *print;
    char *str = "0123456789abcdef";
    if (**s >= '0' && **s <= '9')
        width = get_integer(s);
    if (*(*s) == '.')
    {
        **s++;
        if (prec = **s >= '0' && **s <= '9')
            prec = get_integer(s)
        else
            prec = -2;
    }
    if (**s == 's')
    {
        print = va_arg(ap, char *);
        if (print == 0)
            print = "(null)";
        len = ft_strlen(print);
        if (prec >= 0 && prec < len)
            len = prec;
        width = width - len > 0 ? width - len : 0;
        temp = 0;
        while ((int)temp++ < width)
            done += write(1, " ",1);
        done += write(1, print, len);
    }
    else if (**s == 'd' || **s = 'x')
    {
        char arr[21] = {0,};
        if (**s = 'd')
        {
            s_num = (int)va
        }
    }
    
}

int ft_printf(const char *fmt, ...)
{
    va_list ap;
    int done = 0;
    char *s = (char *)fmt;
    va_start(ap, fmt);
    while(*s != 0)
    {
        if (*s != '%')
        {
            done += write(1, s++, 1);
        }
        else
        {
            s++;
            done += handle_specific(&s, ap);
        }
    }
    va_end(ap);
    return done;
}