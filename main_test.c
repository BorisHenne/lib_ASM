/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 01:02:40 by bhenne            #+#    #+#             */
/*   Updated: 2015/05/18 01:02:59 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lib.h"

void			ft_test_isascii(void)
{
	int i;

	i = -1;
	while (i < 129)
	{
		if (ft_isascii(i) == isascii(i))
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, "F", 1);
		}
		i = i + 1;
	}
}
/*
void			ft_test_isblank(void)
{
	int i;

	i = -1;
	while (i < 129)
	{
		if (ft_isblank(i) == isblank(i))
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, "F", 1);
		}
		i = i + 1;
	}
}*/

/*void			ft_test_isxdigit(void)
{
	int i;

	i = -1;
	while (i < 129)
	{
		if (ft_isxdigit(i) == isxdigit(i))
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, "F", 1);
		}
		i = i + 1;
	}
}*/

void			ft_test_isupper(void)
{
	int i;

	i = -1;
	while (i < 129)
	{
		if (ft_isupper(i) == isupper(i))
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, "F", 1);
		}
		i = i + 1;
	}
}

/*void			ft_test_isspace(void)
{
	int i;

	i = -1;
	while (i < 129)
	{
		if (ft_isspace(i) == isspace(i))
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, "F", 1);
		}
		i = i + 1;
	}
}*/

void			ft_test_islower(void)
{
	int i;

	i = -1;
	while (i < 129)
	{
		if (ft_islower(i) == islower(i))
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, "F", 1);
		}
		i = i + 1;
	}
}

void			ft_test_isalpha(void)
{
	int i;

	i = -1;
	while (i < 129)
	{
		if (ft_isalpha(i) == isalpha(i))
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, "F", 1);
		}
		i = i + 1;
	}
}

void			ft_test_isdigit(void)
{
	int i;

	i = -1;
	while (i < 129)
	{
		if (ft_isdigit(i) == isdigit(i))
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, "F", 1);
		}
		i = i + 1;
	}
}

void			ft_test_isalnum(void)
{
	int i;

	i = -1;
	while (i < 129)
	{
		if (ft_isalnum(i) == isalnum(i))
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, "F", 1);
		}
		i = i + 1;
	}
}

void			ft_test_isprint(void)
{
	int i;

	i = -1;
	while (i < 129)
	{
		if (ft_isprint(i) == isprint(i))
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, "F", 1);
		}
		i = i + 1;
	}
}

void			ft_test_tolower(const char *str)
{
	int		iterator;
	char	*tmp;
	char	*cmp;

	tmp = strdup(str);
	cmp = strdup(str);
	if (tmp != NULL && cmp != NULL)
	{
		iterator = 0;
		while (tmp[iterator] != '\0')
		{
			tmp[iterator] = ft_tolower(tmp[iterator]);
			iterator = iterator + 1;
		}
		iterator = 0;
		while (cmp[iterator] != '\0')
		{
			cmp[iterator] = tolower(cmp[iterator]);
			iterator = iterator + 1;
		}
		if (strcmp(cmp, tmp) == 0)
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, "F", 1);
		}
	}
	else
	{
		write(1, "X", 1);
	}
	if (tmp != NULL)
	{
		free(tmp);
	}
	if (cmp != NULL)
	{
		free(cmp);
	}
}

void			ft_test_toupper(char const *str)
{
	int		iterator;
	char	*tmp;
	char	*cmp;

	tmp = strdup(str);
	cmp = strdup(str);
	if (tmp != NULL && cmp != NULL)
	{
		iterator = 0;
		while (tmp[iterator] != '\0')
		{
			tmp[iterator] = ft_toupper(tmp[iterator]);
			iterator = iterator + 1;
		}
		iterator = 0;
		while (cmp[iterator] != '\0')
		{
			cmp[iterator] = toupper(cmp[iterator]);
			iterator = iterator + 1;
		}
		if (strcmp(cmp, tmp) == 0)
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, "F", 1);
		}
	}
	else
	{
		write(1, "X", 1);
	}
	if (tmp != NULL)
	{
		free(tmp);
	}
	if (cmp != NULL)
	{
		free(cmp);
	}
}

void			ft_test_strlen(char const *str)
{
	if (ft_strlen((char *)str) == strlen(str))
	{
		write(1, ".", 1);
	}
	else
	{
		write(1, "F", 1);
	}
}

void			ft_test_bzero(char const *str)
{
	char	*tmp;
	int		iterator;

	tmp = strdup(str);
	if (tmp != NULL)
	{
		iterator = strlen(tmp);
		ft_bzero(tmp, iterator);
		while (iterator > 0)
		{
			iterator = iterator - 1;
			if (tmp[iterator] != 0)
			{
				write(1, "F", 1);
				iterator = -1;
			}
			else if (iterator == 0)
			{
				write(1, ".", 1);
			}
		}
		free(tmp);
	}
	else
	{
		write(1, "X", 1);
	}
}

void			ft_test_memset(char const *str, char const c)
{
	char	*tmp;
	int		iterator;

	tmp = strdup(str);
	if (tmp != NULL)
	{
		iterator = strlen(tmp);
		ft_memset(tmp, c, iterator);
		while (iterator > 0)
		{
			iterator = iterator - 1;
			if (tmp[iterator] != c)
			{
				write(1, "F", 1);
				iterator = -1;
			}
			else if (iterator == 0)
			{
				write(1, ".", 1);
			}
		}
		free(tmp);
	}
	else
	{
		write(1, "X", 1);
	}
}
/*
void			ft_test_puts(char const *str)
{
	unsigned long		ret;
	int		puts_ret;
	int		out;
	int		p[2];
	char	buf[10000];
	char	*tmp;


	tmp = (char *)malloc(sizeof(char) * (strlen(str) + 1));
	if (tmp != NULL)
	{
		tmp = strcpy(tmp, str);
		tmp = strcat(tmp, "\n");
		out = dup(1);
		pipe(p);
		dup2(p[1], 1);
		puts_ret = ft_puts(str);
		dup2(out, 1);

		ret = read(p[0], buf, 10000);
		buf[ret] = 0;
		close(p[0]);
		close(p[1]);
		close(out);
		if (puts_ret == 10 && ret == strlen(tmp) && strcmp(buf, tmp) == 0)
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, "F", 1);
		}
		free(tmp);
	}
	else
	{
		write(1, "X", 1);
	}
}
*/
void			ft_test_memcpy(char const *str)
{
	char	*tmp;
	char	*cmp;
	int		length;

	length = strlen(str);
	tmp = (char *)malloc(sizeof(char) * (length + 1));
	if (tmp != NULL)
	{
		tmp[length] = '\0';
		cmp = ft_memcpy(tmp, (char *)str, length);
		if (cmp == tmp && strcmp(str, tmp) == 0 && strcmp(str, cmp) == 0)
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, "F", 1);
		}
		free(tmp);
	}
	else
	{
		write(1, "X", 1);
	}
}

void			ft_test_strdup(char const *str)
{
	char	*tmp;

	tmp = ft_strdup((char *)str);
	if (tmp != NULL)
	{
		if (str != tmp && strcmp(str, tmp) == 0)
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, "F", 1);
		}
		free(tmp);
	}
	else
	{
		write(1, "X", 1);
	}
}

/*void			ft_test_strcat(char const *str)
{
	char	*tmp;
	char	*cmp;

	tmp = (char *)malloc(sizeof(char) * (strlen(str) * 2 + 1));
	cmp = (char *)malloc(sizeof(char) * (strlen(str) * 2 + 1));
	if (tmp != NULL && cmp != NULL)
	{
		tmp = strcpy(tmp, str);
		cmp = strcpy(cmp, str);
		ft_strcat(tmp, (char *)str);
		strcat(cmp, str);
		if (strcmp(cmp, tmp) == 0)
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, "F", 1);
			write(1, cmp, strlen(cmp));
			write(1, tmp, strlen(tmp));
			write(1, "\n", 1);
		}
	}
	else
	{
		write(1, "X", 1);
	}
	if (tmp != NULL)
	{
		free(tmp);
	}
	if (cmp != NULL)
	{
		free(cmp);
	}
}

void			ft_test_cat(char const *str)
{
	int		fd;
	int		ret;
	int		out;
	int		p[2];
	char	buf[2048];
	char	*tmp;
	char	*cmp;
	long	len;
	long	bk;

	tmp = (char *)malloc(sizeof(char) * 1);
	cmp = (char *)malloc(sizeof(char) * 1);
	tmp[0] = 0;
	cmp[0] = 0;
	bk = 0;
	len = 0;
	fd = open(str, O_RDONLY);
	while ((ret = read(fd, buf, 2047)) > 0)
	{
		buf[ret] = 0;
		len = strlen(cmp) + ret;
		cmp = realloc(cmp, len);
		strcat(cmp, buf);
	}
	close(fd);
	fd = open(str, O_RDONLY);
	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_cat(fd);
	dup2(out, 1);
	while (bk < len && (ret = read(p[0], buf, 2047)) > 0)
	{
		buf[ret] = 0;
		bk = strlen(tmp) + ret;
		tmp = realloc(tmp, bk);
		strcat(tmp, buf);
	}
	close(p[0]);
	close(p[1]);
	close(out);
	close(fd);
	if (strcmp(tmp, cmp) == 0)
	{
		write(1, ".", 1);
	}
	else
	{
		write(1, "F", 1);
	}
	free(tmp);
	free(cmp);
}*/
int				main(void)
{
	int		iterator;
	char	*tmp;

	iterator = 1024;
	if ((tmp = (char *)malloc(sizeof(char) * iterator)) != NULL)
	{
		while (iterator > 0)
		{
			iterator = iterator - 1;
			tmp[iterator] = 'a';
		}
	}
	free(tmp);
	write(1, "FT_BZERO : ", 11);
	ft_test_bzero("azerty");
	ft_test_bzero("123456");
	ft_test_bzero("12ERty");
	ft_test_bzero("");
	write(1, "\nFT_ISALNUM : ", 14);
	ft_test_isalnum();
	write(1, "\nFT_ISALPHA : ", 14);
	ft_test_isalpha();
	write(1, "\nFT_ISASCII : ", 14);
	ft_test_isascii();
/*	write(1, "\nFT_ISBLANK : ", 14);
	ft_test_isblank();*/
	write(1, "\nFT_ISDIGIT : ", 14);
	ft_test_isdigit();
	write(1, "\nFT_ISLOWER : ", 14);
	ft_test_islower();
	write(1, "\nFT_ISPRINT : ", 14);
	ft_test_isprint();
/*	write(1, "\nFT_ISSPACE : ", 14);
	ft_test_isspace();*/
	write(1, "\nFT_ISUPPER : ", 14);
	ft_test_isupper();
/*	write(1, "\nFT_ISXDIGIT : ", 15);
	ft_test_isxdigit();*/
	write(1, "\nFT_TOLOWER : ", 14);
	ft_test_tolower("AZERTY");
	ft_test_tolower("123456");
	ft_test_tolower("12ERTY");
	ft_test_tolower("AZERty");
	ft_test_tolower("");
	write(1, "\nFT_TOUPPER : ", 14);
	ft_test_toupper("azerty");
	ft_test_toupper("123456");
	ft_test_toupper("12ERty");
	ft_test_toupper("AZerty");
	ft_test_toupper("");
	write(1, "\nFT_MEMCPY : ", 13);
	ft_test_memcpy("123456");
	ft_test_memcpy("bonjour");
	ft_test_memcpy("AZerTY");
	ft_test_memcpy("");
	write(1, "\nFT_MEMSET : ", 13);
	ft_test_memset("azerty", 'x');
	ft_test_memset("bonjour", 'a');
	ft_test_memset("trololo", '1');
	ft_test_memset("123456", 'a');
/*	write(1, "\nFT_PUTS : ", 11);
	ft_test_puts("azerty");
	ft_test_puts("bonjour");
	ft_test_puts("123456");
	ft_test_puts("12ERty");
	ft_test_puts("");*/
/*	write(1, "\nFT_STRCAT : ", 13);
	ft_test_strcat("azerty");
	ft_test_strcat("123456");
	ft_test_strcat("12ERty");
	ft_test_strcat("");*/
	write(1, "\nFT_STRDUP : ", 13);
	ft_test_strdup("azerty");
	ft_test_strdup("123456");
	ft_test_strdup("");
	ft_test_strdup("12ERty");
	write(1, "\nFT_STRLEN : ", 13);
	ft_test_strlen("azerty");
	ft_test_strlen("123");
	ft_test_strlen("");
	ft_test_strlen("bonjour lapin");
/*	write(1, "\nFT_CAT : ", 11);
	ft_test_cat("./main.c");
	ft_test_cat("./auteur");
	ft_test_cat("/tmp/lapin");*/
	write(1, "\n", 1);
    return (0);
}
