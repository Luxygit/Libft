/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:39:04 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/20 16:23:51 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>
#include <stddef.h>

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	unsigned char	*p;
	size_t			total;

	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	p = (unsigned char *)ptr;
	while (total--)
		*p++ = 0;
	return (ptr);
}
/*

This function takes a number of items and a 
size for each item.
A void pointer is created where it will 
allocate the items. P is created to copy
ptr char mem addresses and write 0s.
Total is the entire memory to be allocated.
With malloc it allocates memory dynamically.
Returning early NULL if not enough memory.
Then p gets assigned ptr casted as a uc*,
so it can be used to write 0 in the ptr
pointer mem address as it augments, 
while maintaining ptr pointer untouched
and returnable.

#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("objs memory alloc %p\n", 
ft_calloc(atoi(argv[1]), atoi(argv[2])));
		printf("calloc.c alloc'ed %p\n", 
calloc(atoi(argv[1]), atoi(argv[2])));
	}
	return (0);
}*/
