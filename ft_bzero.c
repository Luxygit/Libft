/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 17:37:59 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/09 12:12:53 by dievarga         ###   ########.fr       */
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
