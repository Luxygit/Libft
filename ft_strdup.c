/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:17:36 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/20 20:53:24 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>
#include <stddef.h>

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	char	*dup;
	int		len;

	len = 0;
	while (s1[len] != '\0')
	{
		len++;
	}
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	dup = ptr;
	while (*s1)
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	*ptr = '\0';
	return (dup);
}
/*
This function takes a string that will
be duped.
Another string is created where it will
allocate and copy the new string.
Yet another pointer is created so that
when moving the pointer to be returned
it still remains at its start.
It also measures the lenght of the
original string so it can be passed
to the malloc function.
It copies all chars to the new pointer
and lastly adds the null terminator.
It returns NULL if not enough memory.

#include <stdio.h>
#include <string.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("copying %s to %s\n", argv[1], ft_strdup(argv[1]));
		printf("strdup.c copied %s\n", strdup(argv[1]));
	}
	return (0);
}*/
