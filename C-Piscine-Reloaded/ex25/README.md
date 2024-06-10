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

## The train example
Imagine you have a train full of passengers (the array elements), and you want a conductor (the function) to visit each passenger and do something with them (apply the function). 

The `ft_foreach` function acts like the train station manager:

1. **`ft_foreach(int *tab, int length, void (*f)(int))`**: This is like the station announcement:
   - `int *tab`: This tells the manager about the train (the array) carrying the passengers (elements).
   - `int length`: This announces the number of passengers (the length of the array).
   - `void (*f)(int)`: This describes the conductor's job (the function to apply). The conductor needs to know how to interact with passengers (take an integer argument) and doesn't need to announce anything (doesn't return a value).

2. The manager prepares for the train's arrival:
   - **`int i = 0;`**: This sets up a counter (`i`) to keep track of which passenger the conductor has visited.

3. The train arrives, and the manager coordinates the visits:
   - **`while (i < length)`**: This loop keeps going as long as there are more passengers to visit (until `i` reaches the total number of passengers).
     - **`f(tab[i]);`**: The manager tells the conductor to visit the current passenger (`tab[i]`) on the train (the element at the current index). The conductor performs their job (the function is called with the element).
     - **`i++;`**: After each visit, the manager tells the conductor to move on to the next passenger (the counter is incremented).

**Key Idea:**

`ft_foreach` ensures the conductor visits each passenger on the train (iterates through the array) and calls the provided function with each element.
