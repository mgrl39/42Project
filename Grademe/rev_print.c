# 28/06/2024
#include <unistd.h>

int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
                i++;
        return (i);
}

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

int     main(int argc, char *argv[])
{
        int     i;
        int     j;
        if (argc == 2)
        {
                i = 0;
                j = ft_strlen(argv[1]);
                while (j--)
                {
                        ft_putchar(argv[1][j]);
                }
        }
        ft_putchar('\n');
}
