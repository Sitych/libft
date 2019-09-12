#include <string.h>

int	ft_toupper(int c)
{
	if (sizeof(c) == sizeof(unsigned char) && c >= 'a' && c <= 'z')
		return (c - ('A' - 'a'));
	else
		return (c);
}
