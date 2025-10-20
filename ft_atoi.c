/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 23:08:16 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/20 10:59:02 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
/*

This function takes any string str to turn 
into int.
For this I create int result to be returned
and a sign int that will determine if -or+.
First it skips all spaces,
Second it looks for one + or - signs and
if - is found then sign is -1.
Then if digits are found its converted
to its int value and multiplied by the 
decimal stored in result.
123
0 + 1 = 1
10 + 2 = 12
120 + 3 = 123
It returns the previous number
multiplied by its sign.


#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("string converted to int %d\n", ft_atoi(argv[1]));
	}
	return (0);
}*/
