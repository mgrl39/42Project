## Exercise 27

**display_file**

**Turn-in directory**: ex27

**Files to turn in**: `Makefile`, and files needed for your program

**Allowed functions**: `close`, `open`, `read`, `write`

- Create a program called `ft_display_file` that displays, on the standard output, only the content of the file given as argument.

- The submission directory should have a `Makefile` with the following rules: `all`, `clean`, `fclean`. The binary will be called `ft_display_file`.

- The `malloc` function is forbidden. You can only do this exercise by declaring a fixed-sized array.

- All files given as arguments will be valid.

- Error messages have to be displayed on their reserved output followed by a new line.

- If no argument is given, it should display:
  ```
  File name missing.
  ```

- If there is more than one argument, it should display:
  ```
  Too many arguments.
  ```

- If the file cannot be read, it should display:
  ```
  Cannot read file.
  ```
