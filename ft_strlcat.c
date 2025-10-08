/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 14:50:15 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/08 14:49:25 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = 0;
	while (dstlen < dstsize && dst[dstlen] != '\0')
		dstlen++;

	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;

	if (dstlen == dstsize)
		return (dstsize + srclen);
	
	i = 0;
	while (dstlen + i < dstsize - 1 && *src != '\0')
	{
		dst[dstlen + i] = *src;
		src++;
		i++;
	}
	dst[dstlen + i] = '\0';
	
	return (dstlen + srclen);
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
		ft_strlcat(arrd, arrs, atoi(argv[3]));
		printf("ptr is now %s\n", arrd);
	}
	return (0);
}*/
