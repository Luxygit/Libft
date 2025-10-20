/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:41:43 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/19 17:29:37 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h> 

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && n > 1 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*

This function takes 2 strings and compares the 
first n characters.
IF the number of chars to compare is 0 it 
returns early 0.
In a while loop, until either string reaches
its end and the n of chars to compare is higher 
than 1 and their chars are equal, it moves
the pointer to the next char and reduces n.
This means that if one string ends first then
the next char byte will be compared to /0.
And once n is = 1 it compares the last one
returning the value substraction.
It returns a number resulting of the difference
found or 0 if there are no differences.

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("str 1 was %s\n", argv[1]);
		printf("compared to str2 %d\n", 
ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);
}*/
