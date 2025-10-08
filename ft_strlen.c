/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 19:52:27 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/08 14:53:59 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *c)
{
	int	count;

	count = 0;
	while(*c != '\0')
	{
		count++;
		c++;
	}
	return (count);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", ft_strlen(argv[1]));
	}
	return (0);
}*/
