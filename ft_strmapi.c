/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 19:52:15 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/08 17:15:11 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
static int	ft_strlen(const char *s)
{
	int	len;

	if (s == NULL)
		return (0);
	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*res;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	res = malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>
#include <ctype.h>

char add_index(unsigned int i, char c)
{
	return (c + i);  // shifts char by its index
}

int main(void)
{
	char *s = "abcd";
	char *mapped = ft_strmapi(s, add_index);

	if (mapped)
	{
		printf("Original: %s\n", s);
		printf("Mapped:   %s\n", mapped);
		free(mapped);
	}
	return (0);
}*/
