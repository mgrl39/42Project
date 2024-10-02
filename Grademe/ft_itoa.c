/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 08:13:43 by meghribe          #+#    #+#             */
/*   Updated: 2024/10/02 08:24:27 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_len(int nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
		i++;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char		*str;
	int		len;
	long int	nlong;

	nlong = nbr;
	len = count_len(nbr);
	str = (char *)malloc(sizeof(char) + (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	else if (nbr < 0)
	{
		str[0] = '-';
		nlong = -nlong;
	}
	while (nlong > 0)
	{
		str[--len] = nlong % 10 + 48;
		nlong = nlong / 10;
	}
	return (str);
}
/*
int	main(void)
{
	int	number = 5;
	char	*s;

	s = ft_itoa(number);
	printf("%s", s);
}*/
