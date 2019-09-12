#include <header.h>

int     ft_strncmp(const char *str1, const char *str2, size_t n)
{
    int     result;

    result = ft_memcmp(str1, str2, n);
    if (result == 0)
        return (0);
    else if (result > 0)
        return (1);
    else
        return (-1);
}