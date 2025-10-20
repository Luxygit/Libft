/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:08:42 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/16 21:28:16 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*

This function takes a value that must be representable as an
unsigned char.
To convert this value to uppercase the if condition tracks
lowercase chars and adds 32 following the values of the
ASCII table.
It returns the uppercase letter if possible otherwise unchanged.

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("ptr was %c\n", argv[1][0]);
		printf("ptr is now %c\n", ft_tolower(argv[1][0]));
	}
	return (0);
}*/
