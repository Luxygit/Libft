/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 21:58:41 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/20 10:37:15 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && len > i)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] && needle[j] && (i + j) < len
				&& haystack[i + j] == needle[j])
				j++;
			if (!needle[j])
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

/*

This function takes a string  haystack
,a string needle and a len number that will
determine how many chars will be searched.
IF needle empty haystack is returned early.
In a first loop, while haystack is not 
terminated and the iterator hasnt reached
the end of haystack,
IF the haystack pointer and needle pointer
are equal,
while every char of hay is evaluated and 
needle chars exist and the sum of index
doesnt reach the end of the length and
the consecutive hay chars are equal
to the needle chars, it augments j to
look for the next chars.
IF it reaches the end of needle then
that means all chars were found thus
it returns the pointer of hay where
we started searching.
Otherwise it augments i and the next
char of hay is the start of the search.
It returns NULL if needle not found. Or 
a pointer to the first char of needle.

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("found str in the str %s\n", 
ft_strnstr(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);
}*/
