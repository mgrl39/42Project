int	ft_iterative_factorial(int nb)
{
	int	calc;

	calc = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		calc *= nb;
		nb--;
	}
	return (calc);
}
