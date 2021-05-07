#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int ft_strlen(char *s)
{
    int len = 0;
    while (s[len] != 0)
        len++;
    return len;
}
int get_integer(char **s)
{
    int value = 0;
    char *p = *s;
    while (*p >= '0' && *p <= '9')
    {
        value = value * 10 + (*p - '0');
        *s = ++p;
    }
    return value;
}
int handle_specific(char **s, va_list ap)
{
    int width = 0;
    int prec = -1;
    int len = 0;
    int done = 0;
    int minus = 1;
    int base;
    long long int s_num;
    unsigned long long int u_num;
    unsigned long long int temp = 0;
    char *print;
    char *str = "0123456789abcdef";
    if (*(*s) >= '0' && *(*s) <= '9')
        width = get_integer(s);
    if (*(*s) == '.')
    {
        *s = ++(*s);
        prec = *(*s) >= '0' && *(*s) <= '9' ? get_integer(s) : -2;
    }
    if (*(*s) == 's')
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
            done += write(1, " ", 1);
        done += write(1, print, len);
    }
    else if (*(*s) == 'd' || *(*s) == 'x')
    { 
        char arr[21] = {
            0,
        };
        if (*(*s) == 'd')
        {
            s_num = (int)va_arg(ap, int);
            minus = s_num < 0 ? -1 : minus;
            u_num = minus == -1 ? -s_num : s_num;
        }
        else
            u_num = (unsigned int)va_arg(ap, unsigned int);
        temp = u_num;
        base = *(*s) == 'd' ? 10 : 16;
        while (temp != 0)
        {
            temp /= base;
            len++;
        }
        if (u_num == 0)
        { //예외 처리
            if (prec == 0 || prec == -2)
            {
                print = "";
                len = 0;
            }
            else
            {
                arr[0] = '0';
                len = 1;
            }
        }
        else
        {
            temp = len;
            while (u_num != 0)
            {
                arr[--temp] = str[u_num % base];
                u_num /= base;
            }
        }
        print = arr;
        width = minus == -1 ? width - 1 : width;
        prec = prec - len > 0 ? prec - len : 0;
        temp = 0;
        while ((int)temp++ < width - (prec + len))
            done += write(1, " ", 1);
        if (minus == -1)
            done += write(1, "-", 1);
        temp = 0;
        while ((int)temp++ < prec)
            done += write(1, "0", 1);
        done += write(1, print, len);
    }
    *s = ++(*s);
    return done;
}
int ft_printf(const char *fmt, ...)
{
    va_list ap;
    int done = 0;
    char *s = (char *)fmt;
    va_start(ap, fmt);
    while (*s != 0)
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

int main()
{
    printf("|%10.1d|\n", 1111);
    ft_printf("|%10.1d|\n", 1111);

    printf("|%10.1s|\n", "1111");
    ft_printf("|%10.1s|\n", "1111");

    return (0);
}