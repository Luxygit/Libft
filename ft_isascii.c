/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:36:34 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/02 17:23:58 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", ft_isascii(argv[1][0]));
	}
	return (0);
}*/
