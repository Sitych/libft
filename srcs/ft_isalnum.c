#include <header.h>

int	isalnum(int c)
{
	if ( ft_isdigit(c) || ft_isalpha(c))
		return (c);
	else
		return (0);
}
