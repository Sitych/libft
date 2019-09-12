#include <string.h>

int	ft_tolower(int c)
{
	if (sizeof(c) == sizeof(unsigned char) && c >= 'A' && c <= 'Z')
		return (c + ('A' - 'a'));
	else
		return (c);
}
