# Parte 1 - libc Functions

### isalpha
**checks  for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || is‐lower(c)). 
In some locales, there may be additional characters for  which  isalpha()  is  true—letters which are neither uppercase nor lowercase.**

`int ft_isalpha(int c);`

The values returned are nonzero if the character c falls into the tested class, and zero if not.

```c
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
```

The function checks if the character falls within either of the following ranges:
* From 'a' to 'z' (ASCII values of lowercase letters).
* From 'A' to 'Z' (ASCII values of uppercase letters).

If the character falls within either of these ranges, the function returns 1, indicating it's alphabetic. Otherwise, it returns 0.

```mermaid
flowchart TD
    A[Start] --> B{Is c between 'a' and 'z'?}
    B -->|Yes| D[Return 1]
    B -->|No| C{Is c between 'A' and 'Z'?}
    C -->|Yes| D[Return 1]
    C -->|No| E[Return 0]
    D --> F[End]
    E --> F[End]
```
### isdigit
**checks for a digit (0 through 9).**

`int ft_isdigit(int c);`

The values returned are nonzero if the character c falls into the tested class, and zero if not.

```c
int	ft_isdigit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
```

This ft_isdigit function is designed to check whether a character is a digit. It checks if the character falls within the ASCII range corresponding to digits, which is from '0' to '9' (ASCII values 48 to 57).

If the character falls within this range, the function returns 1, indicating it's a digit. Otherwise, it returns 0.

```mermaid
flowchart TD
    A[Start] --> B{Is c between 48 and 57?}
    B -->|Yes| C[Return 1]
    B -->|No| D[Return 0]
    C --> E[End]
    D --> E[End]
```
### isalnum
**checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).**

`int ft_isalnum(int c);`

The values returned are nonzero if the character c falls into the tested class, and zero if not.

```c
int	ft_isalnum(char c)
{
	if ((c >= 48 && c <= 57)
		|| (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	return (0);
}
```
The function checks if the character falls within any of the following ranges:
* From '0' to '9' (ASCII values 48 to 57), representing numeric digits.
* From 'A' to 'Z' (ASCII values 65 to 90), representing uppercase letters.
* From 'a' to 'z' (ASCII values 97 to 122), representing lowercase letters.

If the character falls within any of these ranges, the function returns 1, indicating it's alphanumeric. Otherwise, it returns 0.

```mermaid
flowchart TD
    A[Start] --> B{Is c between 48 and 57?}
    B -->|Yes| E[Return 1]
    B -->|No| C{Is c between 65 and 90?}
    C -->|Yes| E[Return 1]
    C -->|No| D{Is c between 97 and 122?}
    D -->|Yes| E[Return 1]
    D -->|No| F[Return 0]
    E --> G[End]
    F --> G[End]
```
### isascii
**checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.**

`int ft_isascii(int c);`

The values returned are nonzero if the character c falls into the tested class, and zero if not.

```c
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
```
This ft_isascii function is designed to check whether a character is a valid ASCII character. It verifies if the character's ASCII value falls within the range of 0 to 127, inclusive, which covers all standard ASCII characters.

If the character's ASCII value falls within this range, the function returns 1, indicating it's a valid ASCII character. Otherwise, it returns 0.
```mermaid
flowchart TD
    A[Start] --> B{Is c between 0 and 127?}
    B -->|Yes| C[Return 1]
    B -->|No| D[Return 0]
    C --> E[End]
    D --> E[End]
```
### isprint
**checks for any printable character including space.**

`int ft_isprint(int c);`

The values returned are nonzero if the character c falls into the tested class, and zero if not.

```c
int	ft_isprint(char c)
{
	if (c >= 32 && c <= 127)
		return (1);
	return (0);
}
```
This ft_isprint function is designed to check whether a character is a printable character. It checks if the character's ASCII value falls within the range of 32 to 127, inclusive. In ASCII, this range covers all printable characters, including letters, digits, punctuation marks, and some special characters like space.

If the character's ASCII value falls within this range, the function returns 1, indicating it's a printable character. Otherwise, it returns 0.
```mermaid
flowchart TD
    A[Start] --> B{Is c between 32 and 127?}
    B -->|Yes| C[Return 1]
    B -->|No| D[Return 0]
    C --> E[End]
    D --> E[End]
```
### toupper

If  c is a lowercase letter, toupper() returns its uppercase equivalent, if an uppercase representation exists in the current locale.  Otherwise, it returns c. 

`int ft_toupper(int c);`

The value returned is that of the converted letter, or c if the conversion was not possible.

```c
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
```
```mermaid
flowchart TD
    A[Start] --> B{Is c between 97 and 122?}
    B -->|Yes| C[c = c - 32]
    B -->|No| D[Return c]
    C --> D[Return c]
    D --> E[End]
```
### tolower

If  c is an uppercase letter, tolower() returns its lowercase equivalent, if a lowercase representation exists in the current locale.  Otherwise, it returns c.

`int ft_tolower(int c);`

The value returned is that of the converted letter, or c if the conversion was not possible.

```c
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
```
```mermaid
flowchart TD
    A[Start] --> B{Is c between 65 and 90?}
    B -->|Yes| C[Return c + 32]
    B -->|No| D[Return c]
    C --> E[End]
    D --> E[End]
```
### strlen
**calculate the length of a string**

`size_t ft_strlen(const char *s);`

The strlen() function calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').

```c
size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
```
This function ft_strlen calculates the length of a string by iterating through each character until it encounters the null terminator '\0', which marks the end of the string.

The breakdown:
* It initializes a variable i of type size_t to store the length of the string.
* It sets i to 0 initially.
* It enters a while loop that continues until it finds the null terminator '\0'.
* Inside the loop, it increments i to move to the next character.
* Once the null terminator is encountered, the loop exits.
* Finally, it returns the value of i, which represents the length of the string.

```mermaid
flowchart TD
    A["Start"] --> B["i = 0"]
    B --> C{"str[i] != '\0'"}
    C -->|Yes| D["i++"]
    D --> C
    C -->|No| E["Return i"]
    E --> F["End"]
```
### strlcpy
### strlcat
### strchr
### strchr
### strrchr
### strncmp
### strnstr

### memset
```c
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char		*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
```
#### The difference between unsigned char and char
![why unsigned char in memset](../_img/info/ft_memset1.png)
[Link to the first image](https://www.emblogic.com/blog/05/memsetmemmovememcopy-function/)

![unsigned char and char difference](../_img/info/ft_memset2.png)
[Link to the second image](https://es.stackoverflow.com/questions/461245/cual-es-la-diferencia-entre-char-y-unsigned-char-en-c)
### bzero
```c
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*p;

		
	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
```

```mermaid
flowchart TD
    A["Start"] --> B["Initialize i = 0"]
    B --> C["Initialize p = (unsigned char *)s"]
    C --> D["i < n"]
    D -- Yes --> E["p[i] = '\0'"]
    E --> F["Increment i"]
    F --> D
    D -- No --> G["End"]
    G --> H["Return"]
```
### memcpy
### memmove
### memchr
### memcmp

### atoi

```c
int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		mult;
	int		res;

	i = 0;
	res = 0;
	mult = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			mult *= -1;
	}
	while (nptr[i] >= 48 && nptr[i] <= 56)
	{
		res = res * 10 + (nptr[i] - 48);
		i++;
	}
	return (res * mult);
}
```
