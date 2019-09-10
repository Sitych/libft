#include <header.h>

char    *ft_strchr(const char *str, int c)
{
    return ((char*)ft_memchr(str, c, ft_strlen(str)));
}