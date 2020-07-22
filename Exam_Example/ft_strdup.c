#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char *s;
	int len;

	len = 0;
	while (src[len])
		++len;
	if (!(s = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s[len] = '\0';
	while (len >= 0)
	{
		s[len] = src[len];
		len--;
	}
	return (s);
}

int		main(void)
{
	printf("%s", ft_strdup("abcd"));
}
