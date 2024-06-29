This is not mine :)
```md
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:55:23 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/12 21:57:39 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	res;

	if (!n)
		return (1);
	res = 0;
	while (n)
	{
		res++;
		n /= 10;
	}
	return (res);
}

static void	put_digits(char *dst, long int n, int last_i)
{
	while (n)
	{
		dst[--last_i] = n % 10 + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int			neg;
	char		*res;
	int			str_len;
	long int	ln;

	neg = 0;
	ln = n;
	if (ln < 0)
		neg = 1;
	str_len = count_digits(ln) + neg;
	res = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!res)
		return (NULL);
	res[str_len] = '\0';
	if (neg)
	{
		res[0] = '-';
		put_digits(res, ln * (-1), str_len);
	}
	else if (!n)
		res[0] = '0';
	else
		put_digits(res, ln, str_len);
	return (res);
}
```
