```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 16:34:15 by meghribe          #+#    #+#             */
/*   Updated: 2024/07/09 22:07:36 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	i = dst_len;
	j = 0;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
		dst[i] = '\0';
	return (dst_len + src_len);
}
#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[20] = "Hello";
    char src[] = " World";
    size_t size = 15;
    size_t result;

    result = ft_strlcat(buffer, src, size);
    printf("Result: %zu\n", result);
    printf("Buffer: %s\n", buffer);

    return 0;
}

```
