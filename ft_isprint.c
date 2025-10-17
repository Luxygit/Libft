/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:58:32 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/17 10:45:23 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*

This function checks if c, with has to have an int value of a char
, is also a value of a printable char including space.
It returns 0 if it doesn't meet the  criteria or a non-zero value
if it does.


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
