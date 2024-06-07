#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	repeater;
	int	counter;
	int	tmp;

	repeater = 0;
	counter = 0;
	while (repeater < size)
	{
		counter = 0;
		while (counter + 1 < size)
		{
			if (tab[counter] > tab[counter + 1])
			{
				tmp = tab[counter];
				tab[counter] = tab[counter + 1];
				tab[counter + 1] = tmp;
			}
			counter++;
		}
		repeater++;
	}
}
