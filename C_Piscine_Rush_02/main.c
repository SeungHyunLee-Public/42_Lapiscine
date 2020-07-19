#include <unistd.h>
#include <fcntl.h>

#define BUFF_SIZE 1024

char	valid_check(int argc, char *str);

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
				if (valid_check(argc, argv[i]) == 0)
				{
					write(1, &buff[i], 1);
				}
				i++;
			}
		}
		close (fd);
	}
	else
	{
		write(1, "Dict Error", 10);
		write(1, "\n", 2);
	}
}
