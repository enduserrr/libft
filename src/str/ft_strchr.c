#include "../../incs/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] == (char)c)
			return ((char *)s + i);
	if ((char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}
