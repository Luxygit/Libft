/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:20:14 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/08 14:55:03 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned int	i;

	p = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		*p = c;
		p++;
		i++;
	}
}
/*
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
