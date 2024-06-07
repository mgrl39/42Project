#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;

	count = 0;
	while (count < (size / 2))
	{
		temp = tab[count];
		tab[count] = tab[(size - 1 - count)];
		tab[size - 1 - count] = temp;
		count++;
	}
}
