/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:02:11 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/05 14:51:09 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;

	srcsize = 0;
	while (src[srcsize] != '\0')
	{
		srcsize++;
	}

	if (dstsize > 0)
	{
		while (dstsize > 1 && *src != '\0')
		{
			*dst = *src;
			dst++;
			src++;
			dstsize--;
		}
		*dst = '\0';
	}

	return (srcsize);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	char	*arrd = argv[1];
	char	*arrs = argv[2];
	
	if (argc == 4)
	{
		printf("ptr was %s\n", arrd);
		ft_strlcpy(arrd, arrs, atoi(argv[3]));
		printf("ptr is now %s\n", arrd);
	}
	return (0);
}*/
