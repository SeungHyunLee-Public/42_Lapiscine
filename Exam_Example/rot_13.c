#include <unistd.h>

char	conv(char c)
{
	if ((c <= 'm' && c >= 'a') || (c <= 'M' && c>= 'A'))
		c +=13;
	else if ((c <= 'z' && c > 'm') || (c <= 'Z' && c > 'M'))
		c -=13;
	return (c);
}

int		main(int ac, char **av)
{
	char c;

	if (ac ==2)
	{
		while (*av[1])
		{
			c = conv(*av[1]);
			write(1, &c, 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
}
