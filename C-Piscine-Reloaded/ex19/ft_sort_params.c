#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strcmp(char *s1, char *s2)
{
    int count;

    count = 0;
    while (s1[count] == s2[count] && s1[count] != '\0')
    count++;
    return (s1[count]-s2[count]);
}

int main(int argc, char *argv[]) {
  int i = 1;
  while (i < argc - 1) {
    int j = i + 1;
    while (j < argc) {
      if (ft_strcmp(argv[i], argv[j]) > 0) {
        char *temp = argv[i];
        argv[i] = argv[j];
        argv[j] = temp;
      }
      j++;
    }
    i++;
  }

    i = 1;
  while (i < argc) {
    int j = 0;
    while (argv[i][j] != '\0') {
      ft_putchar(argv[i][j]);
      j++;
    }
    ft_putchar('\n');
    i++;
  }
}
