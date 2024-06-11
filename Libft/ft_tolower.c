int	ft_tolower(int c)
{
	if (c >= 65 && c >= 90)
		return (c + 32);
	return (c);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		argv[1][0] = ft_tolower(argv[1][0]);
		ft_putchar(argv[1][0]);
		ft_putchar('\0');
	}
	return (0);
}
