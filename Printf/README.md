First day: Tuesday Jul 16 21:17
```mermaid
sequenceDiagram
    participant FT as ft_printf
    participant HF as handle_format
    participant PC as ft_putchar
    participant PS as ft_putstr
    participant PN as ft_putnbr
    participant PNU as ft_putnbr_unsigned
    participant PH as ft_puthex
    participant PP as ft_putpointer

    FT->>HF: Process format
    HF->>PS: Call if format is "s"
    HF->>PN: Call if format is "d" or "i"
    HF->>PNU: Call if format is "u"
    HF->>PH: Call if format is "x" or "X"
    HF->>PP: Call if format is "p"

    PP->>PS: Call ft_putstr if pointer is NULL
    PP->>PH: Call ft_puthex to print address

    PN->>PC: Print digits
    PNU->>PC: Print digits
    PH->>PC: Print hex digits

    FT->>PC: Print single characters

    PS->>PC: Print characters in string
```
```mermaid
graph TD
    A[ft_printf] -->|calls| B[handle_format]
    A -->|calls| C[ft_putchar]

    B -->|handles format| D[ft_putstr]
    B -->|handles format| E[ft_putnbr]
    B -->|handles format| F[ft_putnbr_unsigned]
    B -->|handles format| G[ft_puthex]
    B -->|handles format| H[ft_putpointer]
    B -->|handles format| C[ft_putchar]

    H -->|uses| D
    H -->|uses| G

    E -->|used by| C
    F -->|used by| C
    G -->|used by| C
    G -->|used by| H
    D -->|used by| C


    classDef funcStyle fill:#f9f,stroke:#333,stroke-width:2px;
    class A,B,C,D,E,F,G,H funcStyle;
```

> [!CAUTION]  
> These functions have not been verified yet. **_I cannot demonstrate that they work correctly._**

### Simplified Guide for Reprogramming `printf()` using `libft`

To reprogram `printf()` with `libft`, follow these streamlined steps:

### 1. **Variadic Functions**
   - **Concept**: Learn about variadic functions using `stdarg.h`.
   - **Key Macros**: Understand `va_start`, `va_arg`, `va_end`.

### 2. **Reuse `libft` Functions**
   - **String Functions**: Use `ft_strlen`, `ft_strjoin`, `ft_strdup`.
   - **Conversion Functions**: Use `ft_itoa` for integers.
   - **Output Functions**: Use `ft_putchar_fd`, `ft_putstr_fd`.

### 3. **Handle Format Specifiers**
   - **Common Specifiers**: `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`.
   - **Incremental Approach**: Implement and test one specifier at a time.

### 4. **Core Function Development**
   - **Initialization**: Set up variadic list.
   - **Parsing**: Identify and process format specifiers.
   - **Formatting**: Convert arguments based on specifiers.
   - **Output**: Print formatted strings using `libft` functions.

### 5. **Testing**
   - **Unit Tests**: Write tests for each format specifier.
   - **Edge Cases**: Consider special characters, large numbers, and null pointers.

### 6. **Makefile**
   - **Integration**: Ensure the Makefile compiles all necessary files.
   - **Targets**: Use `all`, `clean`, `fclean`, `re` for build management.

By focusing on these key areas, you can efficiently reprogram `printf()` using your existing `libft` functions.

