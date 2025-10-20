/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 17:40:17 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/17 22:34:33 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*

This function takes the string s by its pointer,
and a c char value to be looked for in the s string.
last char pointer is created as a temp pointer
that will change it value until the last occur
of c is found in s.
In a while loop, until the evaluated byte is \0,
if the pointer passed is equal to c we assign 
that pointer value to last repeatedly until
we find the last one.
But if c is null or 0 then the null terminator
of s will be located and its s pointer returned. 
It returns a pointer to the last ocurrance of c 
in s or NULL if not found.

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("char was %c\n", argv[2][0]);
		printf("found in the str %s\n", ft_strrchr(argv[1], argv[2][0]));
	}
	return (0);
}*/
