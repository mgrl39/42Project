int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else
	{
		return ((s1[i] - s2[i]));
	}
}
