int	is_lowercase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int	is_uppercase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int	is_letter(char c)
{
	if (is_lowercase(c) || is_uppercase(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lowercase(str[0]))
			str[i] -= 32;
		else if (is_lowercase(str[i]) && str[i - 1] == ' ')
			str[i] -= 32;
		else if (is_lowercase(str[i]) && str[i - 1] == '-')
			str[i] -= 32;
		else if (is_lowercase(str[i]) && str[i - 1] == '+')
			str[i] -= 32;
		else if (is_lowercase(str[i]) && str[i - 1] == '.')
			str[i] -= 32;
		else if (is_uppercase(str[i]) && is_letter(str[i - 1]))
			str[i] += 32;
		else if (is_uppercase(str[i]) && is_lowercase(str[i - 1]))
			str[i] += 32;
		i++;
	}
	return (str);
}
