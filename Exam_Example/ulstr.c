#include <unistd.h>

int		trans_alpha(char c)
{
	if (c <= 'z' && c >= 'a')
		c = c - 32;
	else if (c <= 'Z' && c >= 'A')
		c = c + 32;
	return (c);
}

int		main(int argc, char **argv)
{
	char submit;

	if (argc == 2)
	{
		while (*argv[1])
		{
			submit = trans_alpha(*argv[1]);
			write(1, &submit, 1);
			argv[1]++;
		}

	}
}
