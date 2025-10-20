/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:10:10 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/17 20:56:47 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*

This function takes the string s by its pointer,
and a c char value to be looked for in the s string.
In a while loop, until the evaluated byte is \0,
if the pointer passed is equal to c we return
early that s pointer.
But if c is null or 0 then the null terminator
of s will be located and its s pointer returned. 
It returns a pointer to the first ocurrance of c 
in s or NULL if not found.

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("char was %c\n", argv[2][0]);
		printf("found in the str %s\n", ft_strchr(argv[1], argv[2][0]));
	}
	return (0);
}*/
