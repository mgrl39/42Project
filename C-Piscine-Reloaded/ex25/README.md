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

**Explanation:**

1. Everything remains the same until the loop:
   - **`int i = 0;`**: Initialize the counter variable `i` to 0.

2. **`while (i < length)`**: This `while` loop keeps iterating as long as the counter `i` is less than the `length` of the array.
   - Inside the loop:
     - **`f(tab[i]);`**: Call the function pointed to by `f` with the current element (`tab[i]`).
     - **`i++;`**: Increment the counter `i` after each function call to move to the next element.

**Both `for` and `while` loops achieve the same outcome in this case.** They iterate through each element of the array and call the provided function with that element. The choice between `for` and `while` can sometimes be a matter of preference or readability depending on the situation.
