/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:21:58 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/21 12:30:59 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static void	ft_strcpy(const char *s, char *d, size_t len)
{
	while (len--)
		*d++ = *s++;
	*d = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	char	*ret;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
	{
		d = malloc(1);
		if (!d)
			return (NULL);
		d[0] = '\0';
		return (d);
	}
	if (len > slen - start)
		len = slen - start;
	d = malloc (len + 1);
	if (!d)
		return (NULL);
	ret = d;
	s = s + start;
	ft_strcpy(s, d, len);
	return (ret);
}
/*

This function takes a string s, an index
start and the len size as the maximum
length of the substring.
First two new pointers are created as
usual to maintain one untouched at its
start and return it.
If the original string is empty it 
returns NULL early
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("new substring is %s\n", 
ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
	}
	return (0);
}*/
