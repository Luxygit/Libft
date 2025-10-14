/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:02:11 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/14 17:54:05 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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

This function takes two null terminated strings src and dst, 
and dstsize +number that will tel us the size of bytes of src
to be copied to dst always saving one byte for the null byte.
For this I create two char type unsigned pointers d and s
 and point them to same addresses as src and dst.
I create a srcsize iterator that will increase until the end of src
If dst has space for it, the while loop iterates through src and
until before dstsize reaches, copying values from src to dst
augmenting one byte 
reaches 0 by diminishing it by 1 each time
it assigns the values to the d address and goes to the next bytes
augmenting by 1 each pointer.
assigns null to the last byte.
It returns the fnal lenght of src.

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
