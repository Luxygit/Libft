/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 13:36:24 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/14 18:22:16 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	if (d == s || len == 0)
		return (dst);
	if (d < s)
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	else
	{
		d = d + len;
		s = s + len;
		while (len--)
			*(--d) = *(--s);
	}
	return (dst);
}
/*

This function takes a pointer dest, a constant pointer src 
and a +number n that will tel us how many first bytes of c 
will be copied from src to dest by handling overlapping.
For this I create two char type unsigned pointers d and s
 and point them to same addresses as src and dst.
If d and s mem addreses are equal or the bytes to copy are 0 then
it returns the pointer dst early.
If the mem address of d is before s then the while loop until
before the len value goes to 0, copying s to d values.
Otherwise it adds d and s the lenght so their equal to thei last
 byte addresss, then while loops assigns the values diminishing
by 1 from backwards.
It returns a pointer to dst.

*/
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	char	*arrd = argv[1];
	char	*arrs = argv[2];
	
	if (argc == 4)
	{
		printf("ptr was %s\n", arrd);
		ft_memmove(arrd, arrs, atoi(argv[3]));
		printf("ptr is now %s\n", arrd);
	}
	return (0);
}
