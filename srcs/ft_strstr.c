#include <header.h>

char    *ft_strstr(const char *haystack, const char *needle)
{
    size_t  len;
    char    *str;

    len = ft_strlen(needle);
    str = (char *)haystack;
    while (*str)
    {
        if (!memcmp(str, needle, len))
            return (str);
        str++;
    }
    return (NULL);
}