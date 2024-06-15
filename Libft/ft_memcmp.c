void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}


#include <stdio.h>

int main() {
    char mem1[] = "abcdef";
    char mem2[] = "abcdez";
    
    int result = ft_memcmp(mem1, mem2, 6);
    
    if (result < 0) {
        printf("mem1 is less than mem2\n");
    } else if (result > 0) {
        printf("mem1 is greater than mem2\n");
    } else {
        printf("mem1 is equal to mem2\n");
    }
    
    return 0;
}

