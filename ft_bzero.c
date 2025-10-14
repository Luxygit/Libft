/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 17:37:59 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/14 16:03:36 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)c;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}
/*

This function takes a pointer c and a +number n
that will tel us how many first bytes of c will be filled by 0s
For this I create first a char type unsigned pointer p and 
point it to same address as c.
Then the while loop iterates until before the n iterator 
reaches the 0 by diminishing it by 1 each time,
it assigns 0 to each p address and goes to the next byte.

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	char	*arr = argv[1];
	if (argc == 3)
	{
		printf("ptr was %s\n", arr);
		ft_bzero(arr + 1, atoi(argv[2]));
		printf("ptr is now %s\n", arr);
	}
	return (0);
}*/
