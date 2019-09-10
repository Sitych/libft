#include "header.h"

char    *ft_strcat(char *dest, const char *src)
{
    char    *buf;

    buf = dest;
    buf = buf + ft_strlen(buf);
    while (*src)
    {
        ft_memset(buf, *src, 1);
        buf++;
        src++;
    }
    *buf = 0;
    return (dest);
}