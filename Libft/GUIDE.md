# Parte 1 - libc Functions

## isalpha
**checks  for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || is‐lower(c)). 
In some locales, there may be additional characters for  which  isalpha()  is  true—letters which are neither uppercase nor lowercase.**

`int isalpha(int c);`

## isdigit
**checks for a digit (0 through 9).**

`int isdigit(int c);`

## isalnum
**checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).**

`int isalnum(int c);`

## isascii
**checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.**

`int isascii(int c);`

## isprint
**checks for any printable character including space.**

`int isprint(int c);`

## strlen
**calculate the length of a string**

`size_t strlen(const char *s);`

The strlen() function calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').

## memset
## bzero
## memcpy
## memmove
## strlcpy
## strlcat
## toupper
## tolower
## strchr
## strchr
## strrchr
## strncmp
## memchr
## memcmp
## strnstr
## atoi
