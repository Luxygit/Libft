/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:21:31 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/09 12:23:53 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count(const char *s, char c)
{
	int	count;
	int	contained;

	count = 0;
	contained = 0;
	while (*s)
	{
		if (*s != c && !contained)
		{
			contained = 1;
			count++;
		}
		else if (*s == c)
			contained = 0;
		s++;
	}
	return (count);
}

static char	*ft_dup(const char *s, int len)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		len;

	i = 0;
	if (!s)
		return (NULL);
	res = malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (len > 0)
			res[i++] = ft_dup(s, len);
		s += len;
	}
	res[i] = NULL;
	return (res);
}
/*
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
			free(result[i]);
			i++;
		}
	}
	return (0);
}*/
