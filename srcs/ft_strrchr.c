#include <header.h>

char        *ft_strrchr(const char *src, int c)
{
	char    *str;
	size_t  len;

    len = ft_strlen(src);
	str = (char*)(src + len);
	len ++;
	while (len-- != 0)
	{
		if (*str == c)
			return (str);
		str--;
	}
	return (NULL);
}