#include "header.h"

char    *ft_strncat(char *dest, const char *src, size_t n)
{
    char    *buf;

    buf = dest;
    buf = buf + ft_strlen(buf);
    while (*src && n--)
    {
        ft_memset(buf, *src, 1);
        buf++;
        src++;
    }
    *buf = 0;
    return (dest);
}