char	valid_check(int argc, char **argv)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (i < argc)
	{
		i++;
		while ((argv[i][j] <= '9' && argv[i][j] >= '0') || argv[i][j] != '\0')
		{
			j++;
		}
	}
	if (argv[i][j] <= '9' && argv[i][j] >= '0')
		return (1);
	else
		return (0);
}
