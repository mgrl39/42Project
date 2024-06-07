int	ft_fibonacci(int index)
{
	int	calc;

	if (index == 0 || index == 1)
		return (index);
	else if (index < 0)
		return (-1);
	else
	{
		calc = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (calc);
}

/*
int	main()
{
	ft_fibonacci(10);
	return (0);
}
*/
