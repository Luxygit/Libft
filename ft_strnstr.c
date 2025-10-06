/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 21:58:41 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/05 23:08:07 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*tmphay;
	const char	*tmpneed;
	size_t		remaining;

	if (*needle == '\0')
		return ((char *)haystack);

	while (*haystack != '\0' && len > 0)
	{
		if (*haystack == *needle)
		{
			tmphay = haystack;
			tmpneed = needle;
			remaining = len;
			while (*tmphay == *tmpneed && *tmpneed != '\0' && remaining > 0)
			{
				tmpneed++;
				tmphay++;
				remaining--;
			}
			if (*tmpneed == '\0')
				return ((char *)haystack);
			
		}
		haystack++;
		len--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("found str in the str %s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);
}*/
