#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

// Função auxiliar para ft_strmapi
static char	my_strmapi_func(unsigned int i, char c)
{
	return (c + i);
}

// Função auxiliar para ft_striteri
void	my_striteri_func(unsigned int i, char *c)
{
	*c += i;
}

// Função auxiliar para ft_lstiter
void	my_lstiter_func(void *content)
{
	printf("ft_lstiter: %s\n", (char *)content);
}

int	main(void)
{
	printf("---------------------- Teste Libft ----------------------\n");
	printf("\n");

	// ft_isalpha
	printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
	printf("ft_isalpha('1'): %d\n", ft_isalpha('1'));
	printf("\n");

	// ft_isdigit
	printf("ft_isdigit('3'): %d\n", ft_isdigit('3'));
	printf("ft_isdigit('A'): %d\n", ft_isdigit('A'));
	printf("\n");

	// ft_isalnum
	printf("ft_isalnum('A'): %d\n", ft_isalnum('A'));
	printf("ft_isalnum('3'): %d\n", ft_isalnum('3'));
	printf("\n");

	// ft_isascii
	printf("ft_isascii('A'): %d\n", ft_isascii('A'));
	printf("ft_isascii(200): %d\n", ft_isascii(200));
	printf("\n");

	// ft_isprint
	printf("ft_isprint('A'): %d\n", ft_isprint('A'));
	printf("ft_isprint(127): %d\n", ft_isprint(127));
	printf("\n");

	// ft_strlen
	printf("ft_strlen(\"Hello\"): %zu\n", ft_strlen("Hello"));
	printf("\n");

	// ft_memset
	char	buffer[10] = "abcdefghi";

	ft_memset(buffer, 'x', 5);
	printf("ft_memset('abcdefghi', 'x', 5): %s\n", buffer);
	printf("\n");

	// ft_bzero
	char	buffer2[10] = "abcdefghi";

	ft_bzero(buffer2, 3);
	printf("ft_bzero('abcdefghi', 3): %s\n", buffer2 + 3);
	printf("\n");

	// ft_memcpy
	char	dest[10];

	ft_memcpy(dest, "123456789", 6);
	printf("ft_memcpy: %s\n", dest);
	printf("\n");

	// ft_memmove
	char	mem[10] = "123456789";

	ft_memmove(mem + 2, mem, 4);
	printf("ft_memmove: %s\n", mem);
	printf("\n");

	// ft_strlcpy
	char	dest2[10] = "World";
	char	src99[10] = "Hello";
	size_t	len;

	len = ft_strlcpy(dest2, src99, 2);
	printf("ft_strlcpy: %s (len: %zu)\n", dest2, len);
	printf("\n");

	// ft_strlcat
	char	dest3[20] = "Hello";
	char	src98[10] = " World";
	size_t	len2;

	len2 = ft_strlcat(dest3, src98, 20);
	printf("ft_strlcat: %s (len: %zu)\n", dest3, len2);
	printf("\n");

	// ft_toupper
	printf("ft_toupper('a'): %c\n", ft_toupper('a'));
	printf("\n");

	// ft_tolower
	printf("ft_tolower('A'): %c\n", ft_tolower('A'));
	printf("\n");

	// ft_strchr
	const char	*str;

	str = "Hello World";
	printf("ft_strchr('o'): %s\n", ft_strchr(str, 'o'));
	printf("\n");

	// ft_strrchr
	printf("ft_strrchr('o'): %s\n", ft_strrchr(str, 'o'));
	printf("\n");

	// ft_strncmp
	printf("ft_strncmp('abc', 'ABC', 2): %d\n", ft_strncmp("abc", "ABC", 2));
	printf("\n");

	// ft_memchr
	printf("ft_memchr('abcdef', 'd', 6): %p\n", ft_memchr("abcdef", 'd', 6));
	printf("\n");

	// ft_memcmp
	printf("ft_memcmp('abc', 'abc', 3): %d\n", ft_memcmp("abc", "abc", 3));
	printf("\n");

	// ft_strnstr
	printf("ft_strnstr('Hello World', 'World', 11): %s\n", ft_strnstr("Hello World", "World", 11));
	printf("\n");

	// ft_atoi
	printf("ft_atoi('42'): %d\n", ft_atoi("42"));
	printf("ft_atoi('   -123'): %d\n", ft_atoi("   -123"));
	printf("ft_atoi('123abc'): %d\n", ft_atoi("123abc"));
	printf("\n");

	// ft_calloc
	int	*arr;
	int i;

	i = 0;
	arr = (int *)ft_calloc(5, sizeof(int));
	if (arr == NULL)
	{
		printf("Erro ao alocar memória.\n");
		return (1);
	}
	while (i < 5)
	{
		printf("ft_calloc[%d]: %d\n", i, arr[i]);
		i++;
	}
	free(arr);
	printf("\n");

	// ft_strdup
	char	*dup;

	dup = ft_strdup("Hello");
	printf("ft_strdup: %s\n", dup);
	free(dup);
	printf("\n");

	printf("---------------------- Teste funções adicionais ----------------------\n");
	printf("\n");

	// ft_substr
	char	*substr;

	substr = ft_substr("Hello World", 6, 5);
	printf("ft_substr: %s\n", substr);
	free(substr);
	printf("\n");

	// ft_strjoin
	char	*joined;

	joined = ft_strjoin("Hello", " World");
	printf("ft_strjoin: %s\n", joined);
	free(joined);
	printf("\n");

	// ft_strtrim
	char	*trimmed;

	trimmed = ft_strtrim("  Hello  ", " ");
	printf("ft_strtrim: %s\n", trimmed);
	free(trimmed);
	printf("\n");

	// ft_split
	char	**split;

	split = ft_split("a,b,c", ',');
	i = 0;
	while (split[i])
	{
		printf("ft_split[%d]: %s\n", i, split[i]);
		free(split[i]);
		i++;
	}
	free(split);
	printf("\n");

	// ft_itoa
	char	*itoa_str;

	itoa_str = ft_itoa(-12345);
	printf("ft_itoa: %s\n", itoa_str);
	free(itoa_str);
	printf("\n");

	// ft_strmapi
	char	*mapi_result;

	mapi_result = ft_strmapi("abcd", my_strmapi_func);
	printf("ft_strmapi: %s\n", mapi_result);
	free(mapi_result);
	printf("\n");

	// ft_striteri
	char	striteri_test[] = "abcd";

	ft_striteri(striteri_test, my_striteri_func);
	printf("ft_striteri: %s\n", striteri_test);
	printf("\n");

	//cc ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c main.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
	return (0);
}
