/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:21:31 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/12 13:46:45 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count(char const *s, char c)
{
	int	n;
	
	n = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		if (*s == c)
		{
			n++;
			while (*s == c)
				s++;
		}
		else
			s++;
	}
	n++;
	return (n);
}

static void	*ft_freeall(char **mem, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(mem[j]);
		j++;
	}
	free(mem);
	return (NULL);
}

static void	ft_splstr(char **ptr, char *str, char c, int n)
{
	int	i;
	char	*aux;

	i = 0;
	if ((n > 0) && *str)
	{
		while (i < (n - 1))
		{
			aux = ft_strchr(str, c);
			ptr[i++] = ft_substr(str, 0, aux - str);
			if (ptr == 0)
			{
				ft_freeall(ptr, i);
				return ;
			}
			while (*aux == c)
				aux++;
			str = aux;
		}
		ptr[i++] = ft_strdup(str);
		ptr[i] = 0;
	}
}

char	**ft_split(char const *s, char c)
{
	int	n;
	char	**ptr;
	char	*str;
	char	a[2];

	a[0] = c;
	a[1] = '\0';
	if (s)
	{
		str = ft_strtrim(s, a);
		if (str)
		{
			n = ft_count(str, c);
			ptr = ft_calloc((n + 1), sizeof(char *));
			if (ptr)
				ft_splstr(ptr, str, c , n);
			free(str);
			return (ptr);
		}
	}
	return (0);
}

#include <string.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	i;
	char	**result;

	i = 0;
	result = ft_split(argv[1], argv[2][0]);
	if (argc > 0 )
	{
		while (result[i])
		{
			printf("objs memory alloc %s\n", result[i]);
			i++;
		}
	}
	char *token = strtok(argv[1], &argv[2][0]);
	while (token != NULL) {
        printf(" %s\n", token);
       token = strtok(NULL, " - ");
    }
	return (0);
}
