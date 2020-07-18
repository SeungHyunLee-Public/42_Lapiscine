#include <unistd.h>
#include <fcntl.h>
#include <valid_check.h>

#define BUFF_SIZE 1024

int		main(int argc, char **argv)
{
	int i;
	int j;
	int fd;
	char buff[BUFF_SIZE];

	i = 0;
	j = 0;
	if (0 < (fd = open("dic.txt", O_RDWR)))
	{
		while(read (fd, buff, BUFF_SIZE) > 0)
		{
			while (i < BUFF_SIZE)
			{
				if (valid_check(argv[i][j] == 1))
				{
					/*search(argc[i][j]*/
					write(1, &buff[i], 1);
					i++;
				}
				else
					i++;
			}
		}
/*
		while (++i < argc)
		{
			while (argv[i][j] != '\0')
			{
				j++;
			}
			write(1, argv[i], j);
		}
*/
		close (fd);
	}
	else
	{
		write(1, "Dict Error", 10);
		write(1, "\n", 2);
	}
}
