/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:17:36 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/09 12:24:44 by dievarga         ###   ########.fr       */
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
