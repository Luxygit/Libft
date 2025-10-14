/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 14:50:15 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/14 18:17:48 by dievarga         ###   ########.fr       */
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

This function takes two null terminated strings src and dst, 
and dstsize +number that will tel us the size of bytes of src
to be appended to dst always saving one byte for the null byte.
I create a dstlen iterator that will increase+1 until the end of
dstlen and while dstlen leaves space for dstsize.
Also while the loop iterates through src, srclen augments.
Then when dstlen is equal to dstsize it returns early the sum
of dstsize + srclen.
it assigns the values to the d address and goes to the next bytes
augmenting by 1 each pointer.
assigns null to the last byte.
It returns the lenghts of dst and src altogether.

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
