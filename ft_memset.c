/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:20:14 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/14 19:24:24 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*

This function takes a pointer b, a char c and a +number len
that will tell us how many first bytes of b will be filled by c.
For this I create first a char type unsigned pointer p and 
point it to same address as b.
Then the while loop iterates until before the i iterator 
reaches the len number since its treated as an index,
it assigns the c value to each p[index] address.
It returns a pointer to the b memory.

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	char	*arr = argv[1];
	if (argc == 4)
	{
		printf("ptr was %s\n", arr);
		ft_memset(arr, argv[2][0], atoi(argv[3]));
		printf("ptr is now %s\n", arr);
	}
	return (0);
}*/
