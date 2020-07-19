char	valid_check(int argc, char *argv)
{
	int i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] > '9' && argv[i] < '0')
			return (1);
		i++;
	}
	return (0);
}
