char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] >= 'A' && str[count] <= 'Z'))
		{
			str[count] += 32;
		}
		count++;
	}
	return (str);
}
