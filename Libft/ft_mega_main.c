
#include "libft.h"
#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#ifndef strlcat
size_t	strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	len;

	if (!src)
		return (0);
	if (!dst)
	{
		if (dsize == 0)
			return (ft_strlen(src));
		else
			return (0);
	}
	i = 0;
	while (*dst && i < dsize)
	{
		++dst;
		++i;
	}
	len = ft_strlcpy(dst, src, dsize - i);
	return (len + i);
}
#endif

#ifndef strlcpy
size_t	strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	slen;
	size_t	i;

	slen = ft_strlen(src);
	i = 0;
	if (dsize < 1)
		return (slen);
	while (src[i] != '\0' && i < dsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (slen);
}
#endif

#ifndef strnstr
char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t needle_len;

    if (*needle == '\0')
        return (char *)haystack;

    needle_len = strlen(needle);
    for (i = 0; i <= len - needle_len; i++)
    {
        if (haystack[i] == needle[0] && strncmp(&haystack[i], needle, needle_len) == 0)
            return (char *)&haystack[i];
    }
    return NULL;
}
#endif

static void	ft_is_tester(char a, int fd)
{
	ft_putendl_fd("Digit, alpha, alnum, ascii, print=============", fd);
	ft_putstr_fd("a = ", 1);
	ft_putchar_fd(a, 1);
	ft_putchar_fd('\n', 1);
	if (!ft_isalnum(a) == !isalnum(a))
		ft_putstr_fd("✅ ", 1);
	else
		ft_putstr_fd("❌ ", 1);
	ft_putstr_fd("ft_isalnum(a): ", 1);
	ft_putnbr_fd(ft_isalnum(a), 1);
	ft_putchar_fd('\n', 1);
	if (!ft_isalpha(a) == !isalpha(a))
		ft_putstr_fd("✅ ", 1);
	else
		ft_putstr_fd("❌ ", 1);
	ft_putstr_fd("ft_isalpha(a): ", 1);
	ft_putnbr_fd(ft_isalpha(a), 1);
	ft_putchar_fd('\n', 1);
	if (!ft_isascii(a) == !isascii(a))
		ft_putstr_fd("✅ ", 1);
	else
		ft_putstr_fd("❌ ", 1);
	ft_putstr_fd("ft_isascii(a): ", 1);
	ft_putnbr_fd(ft_isascii(a), 1);
	ft_putchar_fd('\n', 1);
	if (!ft_isdigit(a) == !isdigit(a))
		ft_putstr_fd("✅ ", 1);
	else
		ft_putstr_fd("❌ ", 1);
	ft_putstr_fd("ft_isdigit(a): ", 1);
	ft_putnbr_fd(ft_isdigit(a), 1);
	ft_putchar_fd('\n', 1);
	if (!ft_isprint(a) == !isprint(a))
		ft_putstr_fd("✅ ", 1);
	else
		ft_putstr_fd("❌ ", 1);
	ft_putstr_fd("ft_isprint(a): ", 1);
	ft_putnbr_fd(ft_isprint(a), 1);
	ft_putchar_fd('\n', 1);

}

static void	ft_to_tester(char a, int fd)
{
	ft_putendl_fd("TO LOWER and TO UPPER========================", fd);
	ft_putstr_fd("a = ", 1);
	ft_putchar_fd(a, fd);
	ft_putchar_fd('\n', fd);
	if (ft_tolower(a) == tolower(a))
		ft_putstr_fd("✅ ", 1);
	else
		ft_putstr_fd("❌ ", 1);
	ft_putstr_fd("ft_tolower(a): ", fd);
	a = ft_tolower(a);
	ft_putchar_fd(a, fd);
	ft_putchar_fd('\n', fd);
	if (ft_tolower(a) == tolower(a))
		ft_putstr_fd("✅ ", 1);
	else
		ft_putstr_fd("❌ ", 1);
	ft_putstr_fd("ft_toupper(a): ", fd);
	a = ft_toupper(a);
	ft_putchar_fd(a, fd);
	ft_putchar_fd('\n', fd);
}

static	void	ft_mem_tester(void)
{
	ft_putendl_fd("MEMORY=======================================", 1);
	size_t	size;

	size = 10;
	// =================================================================
	char	mine_memset[size];
	char	original_memset[size];

	ft_memset(mine_memset, 50, ft_strlen(mine_memset));
	memset(original_memset, 50, strlen(original_memset));
	if (memcmp(mine_memset,original_memset,size))
		ft_putendl_fd("✅ ft_memset ", 1);
	else
		ft_putendl_fd("❌ ft_memset ", 1);
	// =================================================================
	char	mine_bzero[size];
	char	original_bzero[size];
	ft_bzero(mine_bzero, ft_strlen(mine_bzero));
	bzero(original_bzero, strlen(original_bzero));
	if (memcmp(mine_bzero,original_bzero, size))
		ft_putendl_fd("✅ ft_bzero ", 1);
	else
		ft_putendl_fd("❌ ft_bzero ", 1);
	// =================================================================
	if (memcmp(ft_calloc(10,10),calloc(10,10),100) == 0)
		ft_putendl_fd("✅ ft_calloc ", 1);
	else
		ft_putendl_fd("❌ ft_calloc", 1);
	// =================================================================

	if ( \
			memcmp(mine_bzero, original_bzero, size) == \
			ft_memcmp(mine_bzero, original_bzero, size))
		ft_putendl_fd("✅ ft_memcmp ", 1);
	else
		ft_putendl_fd("❌ ft_memcmp ", 1);
	// =================================================================
	char	memcpy_src[size];
	char	mine_memcpy[size];
	ft_memset(memcpy_src, 50, size);
	
	ft_memcpy(mine_memcpy, memcpy_src, size);
	if (memcmp(mine_memcpy, memcpy_src, size) == 0)
		ft_putendl_fd("✅ ft_memcpy", 1);
	else
		ft_putendl_fd("❌ ft_memcpy", 1);
	// =================================================================
	char	memmove_src[size];
	char	mine_memmove[size];
	ft_memset(memmove_src, 50, size);

	ft_memmove(mine_memmove, memmove_src, size);
	if (memcmp(mine_memmove, memmove_src, size) == 0)
		ft_putendl_fd("✅ ft_memmove", 1);
	else
		ft_putendl_fd("❌ ft_memmove", 1);
	// =================================================================
	memmove_src[7] = 'a';
	if (ft_memchr(memmove_src, 'a', size) == memchr(memmove_src, 'a', size))
		ft_putendl_fd("✅ ft_memchr", 1);
	else
		ft_putendl_fd("❌ ft_memchr", 1);
	// =================================================================

}

static void	ft_conv_tester()
{
	char	*s;

	s = "10";
	ft_putendl_fd("CONVERSION=====================================", 1);
	if (atoi("10") == ft_atoi("10"))
		ft_putendl_fd("✅ ft_atoi", 1);
	else
		ft_putendl_fd("❌ ft_atoi", 1);

	// =================================================================
	if (strcmp(ft_itoa(10), s) == 0)
		ft_putendl_fd("✅ ft_itoa", 1);
	else
		ft_putendl_fd("❌ ft_itoa ", 1);

}

char	to_uppercase(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

void	to_uppercase_ptr(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - ('a' - 'A');

}

static int compare_split_arrays(char **expected, char **result) {
    int i = 0;
    while (expected[i] != NULL && result[i] != NULL) {
        if (strcmp(expected[i], result[i]) != 0) {
            return 0; 
        }
        i++;
    }
    return (expected[i] == NULL && result[i] == NULL);
}

static void	ft_str_tester()
{
	ft_putendl_fd("STRINGS=======================================", 1);
	char *str = "Hello World!";
	char *dst = "World";
	
	size_t	size;

	size = 2;

	const char *w1 = "Arbol";
	char w2[10];
	size_t	nsize = sizeof(w2);

	size_t	result = ft_strlcpy(w2, w1, nsize);
	char w3[10];
	size_t	result_std = strlcpy(w3, w1, nsize);
	if (strcmp(w2,w3) == 0 && (result == result_std))
		ft_putendl_fd("✅ ft_strlcpy", 1);
	else
		ft_putendl_fd("❌ ft_strlcpy", 1);
	// =================================================================
	if (ft_strlcat(dst, str, size) == strlcat(dst, str, size))
		ft_putendl_fd("✅ ft_strlcat", 1);
	else
		ft_putendl_fd("❌ ft_strlcat", 1);
	// =================================================================
	if (ft_strchr(str, 111) == strchr(str, 111))
		ft_putendl_fd("✅ ft_strchr", 1);
	else
		ft_putendl_fd("❌ ft_strchr", 1);

	// =================================================================
	if (ft_strrchr(str, 111) == strrchr(str, 111))
		ft_putendl_fd("✅ ft_strrchr", 1);
	else
		ft_putendl_fd("❌ ft_strrchr", 1);
	// =================================================================
	if (ft_strlcat(dst, str, size) == strlcat(dst, str, size))
		ft_putendl_fd("✅ ft_strlcat", 1);
	else
		ft_putendl_fd("❌ ft_strlcat", 1);
	// =================================================================
	if (ft_strchr(str, 111) == strchr(str, 111))
		ft_putendl_fd("✅ ft_strchr", 1);
	else
		ft_putendl_fd("❌ ft_strchr", 1);

	// =================================================================
	if (ft_strnstr(str, dst, 12) == strnstr(str, dst, 12))
		ft_putendl_fd("✅ ft_strnstr", 1);
	else
		ft_putendl_fd("❌ ft_strnstr", 1);
	// =================================================================
	if (!ft_strncmp(ft_strdup(str), strdup(str), ft_strlen(str)))
		ft_putendl_fd("✅ ft_strdup", 1);
	else
		ft_putendl_fd("❌ ft_strdup", 1);
	// =================================================================
	if (!strcmp(ft_strtrim("123hola321","123"), "hola"))
		ft_putendl_fd("✅ ft_strtrim", 1);
	else
		ft_putendl_fd("❌ ft_strtrim", 1);
	// =================================================================
	if (!strcmp(ft_strjoin("Hola","Mundo!"), "HolaMundo!"))
		ft_putendl_fd("✅ ft_strjoin ", 1);
	else
		ft_putendl_fd("❌ ft_strjoin", 1);
	// =================================================================
	char *strmapi_str = "Hola";
	char *strmapi_expected =  "HOLA";
	char *strmapi_result;

	strmapi_result = ft_strmapi(strmapi_str, &to_uppercase);
	if (!strcmp(strmapi_result, strmapi_expected)) 
		ft_putendl_fd("✅ ft_strmapi", 1);
	else
		ft_putendl_fd("❌ ft_strmapi", 1);
	// =================================================================
	char *striteri_result = ft_strdup(strmapi_str);
	ft_striteri(striteri_result, &to_uppercase_ptr);
	// ft_putstr_fd(striteri_result, 1);
	if (!strcmp(striteri_result, strmapi_expected))
		ft_putendl_fd("✅ ft_striteri", 1);
	else
		ft_putendl_fd("❌ ft_striteri", 1);
	free(striteri_result);
	// =================================================================
	char *substr_expected = "mgrl39";
	char const *substr_full = "Welcome everyone to mgrl39's Main";
	char *substr_result = ft_substr(substr_full, 20, 6);
	if (!ft_strncmp(substr_expected, substr_result, ft_strlen(substr_result)))
		ft_putendl_fd("✅ ft_substr", 1);
	else
		ft_putendl_fd("❌ ft_substr", 1);
	// =================================================================
	char *split_result[] = {"Welcome", "everyone", "to", "mgrl39's", "Main", NULL};
	char **split_returned = ft_split(substr_full, ' ');	

	int	split_eval;
	split_eval = 1;

	split_eval &= compare_split_arrays(split_result, split_returned);
	if (split_eval)
		ft_putendl_fd("✅ ft_split", 1);
	else
		ft_putendl_fd("❌ ft_split", 1);
}

static void ft_limiter(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (ft_strlen(&argv[1][0]) != 1)
		{
			ft_putendl_fd("IMPORTANT=======================================", 1);
			ft_putendl_fd("Only one character. \nExample:", 1);
			ft_putstr_fd(argv[0], 1);
			ft_putchar_fd(' ', 1);
			ft_putendl_fd("a", 1);
			return ;
		}
		ft_is_tester(argv[1][0], 1);
		ft_to_tester(argv[1][0], 1);
	}
}
int	main(int argc, char *argv[])
{
	ft_limiter(argc, argv);
	ft_mem_tester();
	ft_conv_tester();
	ft_str_tester();
}
