int	ft_iterative_power(int nb, int power)
{
	int	calc;

	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	calc = 1;
	while (power > 0)
	{
		calc *= nb;
		power--;
	}
	return (calc);
}
