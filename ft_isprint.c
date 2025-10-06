/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:58:32 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/02 19:27:39 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 1 && argv[0])
	{
		printf("%d\n", ft_isprint('\n'));
		printf("%d\n", ft_isprint('a'));
	}
	return (0);
}*/
