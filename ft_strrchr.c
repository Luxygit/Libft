/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 17:40:17 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/05 18:41:03 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
