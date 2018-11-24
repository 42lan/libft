/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:26:57 by amalsago          #+#    #+#             */
/*   Updated: 2018/11/23 09:20:52 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>		/********** A SUPPRIMER **********/ 
#include <stdio.h>		/********** A SUPPRIMER **********/ 
#include <ctype.h>		/********** A SUPPRIMER **********/ 
#include "libft.h"


/*************************************/
/*************** LIBC ****************/
/*************************************/

void	test_ft_memset()
{
	int		size;
	char	c;
	char	s1[50];
	char	s2[50];
	
	size = 4;
	c = '#';
	ft_strcpy(s1, "Hello Galaxy\n42!");
	ft_strcpy(s2, "Hello Galaxy\n42!");
	
	memset(s1, c, size);
	ft_memset(s2, c, size);

	printf("%s\n%s\n", s1, s2);
}

void	test_ft_bzero()
{
	char	tab[10];

	ft_strcpy(tab, "---------");
	//ft_bzero(tab, 4);
	printf("%s\n", tab);
}

void	test_ft_memcpy()
{
	char	src[50];
	char	dst[50];

	ft_strcpy(src, "Hello,world");
	memcpy(dst, src, 1);
	printf("%s\n", dst);
}

void	test_ft_memccpy()
{
	char	src[10] = "ARMAGEDON";
	char	*dst1;
	char	*dst2;
	int		size = 1;
	int		c = 'M';

	dst1 = (char *)malloc(sizeof(char) * 10);
	dst2 = (char *)malloc(sizeof(char) * 10);
	dst1 = memccpy(dst1, src, c, size);
	printf("%s\n", dst1);
	dst2 = ft_memccpy(dst2, src, c, size);
	printf("%s\n", dst2);
}

void	test_ft_memmove()
{
	char	src[] = "ABC";
	void	*res;
	int		size = 2;

	res = ft_memmove(src+2, src, size);
	printf("%s\n", src);
}

void	test_ft_memchr()
{
	char	s1[10] = "Hrf.f42;33";
	char	c = '.';
	int		n = 10;

	printf("%s\n", memchr(s1, c, n));
	
}

void	test_ft_memcmp()
{
	char	s1[10] = "xcvA";
	char	s2[10] = "xcva";
	int		m1 = memcmp(s1, s2, 10); 
	int		m2 = ft_memcmp(s1, s2, 10);
	if (m1 != m2)
		printf("[ ERROR: Difference ]\t%d\t%d\n", m1, m2);

}

void	test_ft_strlen()
{
	char	str[] = "Hello 42";
	if (strlen(str) != ft_strlen(str))
		printf("[ ERROR: Difference ]\t%lu\t%lu\n", strlen(str), ft_strlen(str));
}

void	test_ft_strdup()
{
	char	*s1 = "Hello Galaxy";
	char	*s2 = strdup(s1);
	char	*s3 = ft_strdup(s1);
	
	printf("strdup()\t%s %s\n", s1, s2);
	printf("ft_strdup()\t%s %s\n", s1, s3);
}

void	test_ft_strcpy()
{
	char	*src = "This is me! This is 42!";
	char	dst1[50];
	char	dst2[50];

	printf("strcpy()\t%s\n", strcpy(dst1, src));
	printf("ft_strcpy()\t%s\n", ft_strcpy(dst2, src));
}

void	test_ft_strncpy()
{
	char	*src = "stars";
	char	dst1[50] = "";
	char	dst2[50] = "";
	int		len;

	len = 50;
	printf("%s|\n%s|\n", strncpy(dst1, src, len), ft_strncpy(dst2, src, len));
}

void	test_ft_strcat()
{
	char s1[20] = "bonjour";
	char s2[20] = "bonjour";
	char *s3 = "hello";

	printf("%s\n", strcat(s1, s3));
	printf("%s\n", ft_strcat(s2, s3));
}

void	test_ft_strncat()
{
	char s1[20] = "bon";
	char s2[20] = "bon";
	char *s3 = "journee";

	printf("%s\n", strncat(s1, s3, 3));
	printf("%s\n", ft_strncat(s2, s3, 3));
}

void	test_ft_strlcat()
{
	char s1[10] = "abc";
	char s2[10] = "abc";
	char *s3 = "12345";
	size_t	n = 1;

	//printf("%zu\t%lu\t%s\n", n, strlcat(s1, s3, n), s1);
	printf("strlcat()\t%lu\t%s\n", ft_strlcat(s1, s3, n), s1);
	printf("ft_strlcat()\t%lu\t%s\n", ft_strlcat(s2, s3, n), s2);
}

void	test_ft_strchr()
{
	const char	s[] = "This 9 is. randoM, te+xt";
	char		c = '9';
	char		*res1;
	char		*res2;

	res1 = strchr(s, c);
	res2 = ft_strchr(s, c);
	printf("char '%c'\n%s\n%s\n", c, res1, res2);
}

void	test_ft_strrchr()
{
	const char	s[] = "bonjour";
	char		c = 'b';
	char		*res1;
	char		*res2;

	res1 = strrchr(s, c);
	res2 = ft_strrchr(s, c);
	printf("char '%c'\n%s\n%s\n", c, res1, res2);
}

void	test_ft_strstr()
{
	const char	haystack[50] = "Ceci n4est pas une pipe";
	const char	needle[10] = "";
	char		*res1;
	char		*res2;

	res1 = strstr(haystack, needle);
	res2 = ft_strstr(haystack, needle);
	printf("strstr()\t%s\nft_strstr()\t%s\n", res1, res2);
}

void	test_ft_strnstr()
{
	const char	haystack[50] = "un deux 9";
	const char	needle[10] = "deux";
	char		*res1;
	char		*res2;
	int			len = 5;

	res1 = strnstr(haystack, needle, len);
	res2 = ft_strnstr(haystack, needle, len);
	printf("strnstr()\t%s\nft_strnstr()\t%s\n", res1, res2);
}

void	test_ft_strcmp()
{
	const char	s1[15] = "abcdEF";
	const char	s2[15] = "abcdef";

	printf("strcmp  \t%d\n", strcmp(s1, s2));
	printf("ft_strcmp\t%d\n", ft_strcmp(s1, s2));
}

void	test_ft_strncmp()
{
	const char	s1[15] = "zyxbcdefgh";
	const char	s2[15] = "abcdwxyz";
	int			n = 0;

	printf("strncmp  \t%d\n", strncmp(s1, s2, n));
	printf("ft_strncmp\t%d\n", ft_strncmp(s1, s2, n));
}

void	test_ft_atoi()
{
	int		i;		i = 0;
	char	str0[] = "-123";
	char	str1[] = "2147483649";
	char	str2[] = "+123";
	char	str3[] = "--123";
	char	str4[] = "++1234";
	char	str5[] = "a123";
	char	str6[] = "   123a";
	char	str7[] = "1 2 3";
	char	str8[] = "abc";
	char	str9[] = "-+42";
	char	s[] = "-+42";
	char	*n1 = "-123 TRALAL";
	char	*n2 = "55555555555555555555";
	char	*n3 = "-55555555555555555555";
	char	*tab[] = {str0, str1, str2, str3, str4,
					  str5, str6, str7, str8, str9, s,n1,n2,n3,0};
	while (tab[i] != 0)
	{
		if (atoi(tab[i]) != ft_atoi(tab[i]))
			printf("[ ERROR: Difference ]\t%d\t%d\n", atoi(tab[i]), ft_atoi(tab[i]));
		i++;
	}
}

void	test_ft_isalpha()
{
	int		i;

	i = -10;
	while (i < 131)
	{
		if (isalpha(i) != ft_isalpha(i))
		{
			printf("[ ERROR: Difference at %d position in ASCII table ]\n", i);
			printf("isalpha(%d) = %c\n", i, isalpha(i));
			printf("ft_isalpha(%d) = %c\n", i, ft_isalpha(i));
			exit(1);
		}
		//printf("%d\t%d %d\n", i, isalpha(i), ft_isalpha(i));
		i++;
	}
	printf("[ SUCCES ft_isalpha() ]\n");
}

void	test_ft_isdigit()
{
	int		i;

	i = -10;
	while (i < 131)
	{
		if (isdigit(i) != ft_isdigit(i))
		{
			printf("[ ERROR: Difference at %d position in ASCII table ]\n", i);
			printf("isdigit(%d) = %c\n", i, isdigit(i));
			printf("ft_isdigit(%d) = %c\n", i, ft_isdigit(i));
			exit(1);
		}
		//printf("%d\t%d %d\n", i, isdigit(i), ft_isdigit(i));
		i++;
	}
	printf("[ SUCCES ft_isdigit() ]\n");
}

void	test_ft_isalnum()
{
	int		i;

	i = -10;
	while (i < 131)
	{
		if (isalnum(i) != ft_isalnum(i))
		{
			printf("[ ERROR: Difference at %d position in ASCII table ]\n", i);
			printf("isalnum(%d) = %c\n", i, isalnum(i));
			printf("ft_isalnum(%d) = %c\n", i, ft_isalnum(i));
			exit(1);
		}
		//printf("%d\t%d %d\n", i, isalnum(i), ft_isalnum(i));
		i++;
	}
	printf("[ SUCCES ft_isalnum() ]\n");
}
void	test_ft_isascii()
{
	int		i;

	i = -10;
	while (i < 131)
	{
		if (isascii(i) != ft_isascii(i))
		{
			printf("[ ERROR: Difference at %d position in ASCII table ]\n", i);
			printf("isascii(%d) = %c\n", i, isascii(i));
			printf("ft_isascii(%d) = %c\n", i, ft_isascii(i));
			exit(1);
		}
		//printf("%d\t%d %d\n", i, isascii(i), ft_isascii(i));
		i++;
	}
	printf("[ SUCCES ft_isascii() ]\n");
}

void	test_ft_isprint()
{
	int		i;

	i = 0;
	while (i < 128)
	{
		if (isprint(i) != ft_isprint(i))
		{
			printf("[ ERROR: Difference at %d position in ASCII table ]\n", i);
			printf("isprint(%d) = %c\n", i, isprint(i));
			printf("ft_isprint(%d) = %c\n", i, ft_isprint(i));
			exit(1);
		}
		//printf("%d\t%d %d\n", i, isprint(i), ft_isprint(i));
		i++;
	}
	printf("[ SUCCES ft_isprint() ]\n");
}

void	test_ft_toupper()
{
	int	i;

	i = -10;
	while (i < 130)
	{
		if (toupper(i) != ft_toupper(i))
		{
			printf("[ ERROR: Difference at %d position in ASCII table ]\n", i);
			printf("toupper(%d) = %c\n", i, toupper(i));
			printf("ft_toupper(%d) = %c\n", i, ft_toupper(i));
			exit(1);
		}
		//printf("%c %c\n", toupper(i), ft_toupper(i));
		i++;
	}
	printf("[ SUCCES ft_toupper() ]\n");
}

void	test_ft_tolower()
{
	int	i;

	i = -10;
	while (i < 130)
	{
		if (tolower(i) != ft_tolower(i))
		{
			printf("[ ERROR: Difference at %d position in ASCII table ]\n", i);
			printf("tolower(%d) = %c\n", i, tolower(i));
			printf("ft_tolower(%d) = %c\n", i, ft_tolower(i));
			exit(1);
		}
		//printf("%c %c\n", tolower(i), ft_tolower(i));
		i++;
	}
	printf("[ SUCCES ft_tolower() ]\n");
}

/*************************************/
/********** SUPPLEMENTAIRES **********/
/*************************************/

/*
void	test_ft_strtrim()
{
	char	s1[] = "\t\v \n";

	printf("%s", ft_strtrim(s1));
}
*/

void	test_ft_strsplit(int ac, char **av)
{
	int	i;
	char **tab;

	(void)ac;
	tab = ft_strsplit(av[1], av[2][0]);
	while(tab[i] != 0)
	{
		printf("[%s]\n", tab[i]);
		i++;
	}
}

void	test_ft_itoa()
{
	printf("%s\n", ft_itoa(-623));
}

void	test_ft_putnbr()
{
	ft_putnbr(-214748364);
}



void	test_ft_putchar()
{
	int		i;

	i = 32;
	while (i < 127)
		ft_putchar(i++);
}

void	test_ft_putstr()
{
	ft_putstr("Hello, world! This is 42.");
}

/*************************************/
/*************** BONUS ***************/
/*************************************/



/*************************************/
/*************************************/

void	test_ft_swap()
{
	char	*a;
	char	*b;
	char	**pa;
	char	**pb;

	a = "ABC";
	b = "DEF";
	pa = &a;
	pb = &b;
	printf("%s %s\n", a, b);
	ft_swap(pa, pb, sizeof(char *));
	printf("%s %s\n", a, b);
}




int		main(int argc, char *argv[])
{
	(void)argc;	(void)argv;
	//test_ft_memset();
	//test_ft_bzero();
	//test_ft_memcpy();
	//test_ft_memccpy();
	//test_ft_memmove();
	//test_ft_memcmp();
	//test_ft_strlen();	
	//test_ft_strdup();	
	//test_ft_strcpy();	
	//test_ft_strncpy();	
	//test_ft_strcat();
	//test_ft_strncat();
	//test_ft_strlcat();
	//test_ft_strchr();
	//test_ft_strrchr();
	//test_ft_strstr();
	//test_ft_strnstr();
	//test_ft_strcmp();
	//test_ft_strncmp();
	//test_ft_atoi();	
	//test_ft_isalpha();	
	//test_ft_isdigit();	
	//test_ft_isalnum();	
	//test_ft_isascii();	
	//test_ft_isprint();	
	//test_ft_toupper();
	//test_ft_tolower();
	
	//test_ft_strtrim();
	//test_ft_strsplit(argc, argv);
	//test_ft_itoa();
	//test_ft_putnbr();

	//test_ft_swap();
	
	return (0);
}
