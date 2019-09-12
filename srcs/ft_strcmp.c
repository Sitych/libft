#include <header.h>

int     ft_strcmp(const char *str1, const char *str2)
{
    int     result;

    result = ft_memcmp(str1, str2, ft_strlen(str1));
    if (result == 0)
        return (0);
    else if (result > 0)
        return (1);
    else
        return (-1);
}