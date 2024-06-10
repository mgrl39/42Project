```c
void ft_foreach(int *tab, int length, void (*f)(int))
{
  int i = 0;

  // Loop through each element while the counter is less than the length
  while (i < length)
  {
    // Call the provided function 'f' with the current element (tab[i])
    f(tab[i]);

    // Increment the counter after each function call
    i++;
  }
}
```
