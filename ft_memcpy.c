/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 12:20:47 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/14 16:19:33 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (dst == src || !n)
		return (dst);
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}
/*

This function takes a pointer dest, a constant pointer src 
and a +number n that will tel us how many first bytes of c 
will be copied from src to dest.
For this I create two char type unsigned pointers d and s
 and point them to same addresses as src and dst.
Then the while loop iterates until before the n iterator 
reaches 0 by diminishing it by 1 each time,
it assigns the values to the d address and goes to the next bytes
augmenting by 1 each pointer.
It returns a pointer to dst.

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	char	*arrd = argv[1];
	char	*arrs = argv[2];
	
	if (argc == 4)
	{
		printf("ptr was %s\n", arrd);
		ft_memcpy(arrd, arrs, atoi(argv[3]));
		printf("ptr is now %s\n", arrd);
	}
	return (0);
}*/
