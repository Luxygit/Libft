/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 13:36:24 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/08 14:51:41 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	const unsigned char	*s;

	d = (unsigned char *) dst;
	s = (const unsigned char *) src;

	if (d == s || len ==  0)
		return (dst);
	if (d < s)
	{
		while (len > 0)
		{
			*d = *s;
			d++;
			s++;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			d[len-1] = s[len-1];
			len--;
		}
	}
	return (dst);
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
		ft_memmove(arrd, arrs, atoi(argv[3]));
		printf("ptr is now %s\n", arrd);
	}
	return (0);
}*/
