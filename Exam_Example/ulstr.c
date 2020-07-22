#include <unistd.h>

char	conv(char c)
{
	if (c <= 'z' && c >= 'a')
		c -=32;
	else if (c <= 'Z' && c >= 'A')
		c +=32;
	return (c);
}

int		main(int ac, char **av)
{
	char c;

	if (ac == 2)
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
