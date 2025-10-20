/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 19:58:57 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/19 19:57:26 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		uc;

	p = s;
	uc = (unsigned char)c;
	while (n > 0)
	{
		if (*p == uc)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}
/*

This function takes any type of pointer s, a 
c char value to be looked for in the s string.
For this I create a pointer with a char type
and assign it the S pointer. Also uc is
created and assigned to c so we can compare
these two values.
In a while loop, until before n reaches 0,
if the pointer passed is equal to uc we return
early that p pointer to the byte.
It returns a pointer to the first ocurrance of c 
in s or NULL if not found.

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	//char arr[] = { 'a', 'b', 'c', '\0', 'd' };
	if (argc == 4)
	{
		printf("c was %c\n", argv[2][0]);
		printf("found  %p\n", (void *)ft_memchr(argv[1], 
argv[2][0], atoi(argv[3])));
	}
	return (0);
}*/
