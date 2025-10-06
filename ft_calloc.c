/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:39:04 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/06 15:17:05 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include <stddef.h>

void	*ft_calloc(size_t count, size_t size)
{
	void		*ptr;
	unsigned char	*p;
	size_t		total;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);

	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);

	p = (unsigned char *)ptr;
	while (total--)
		*p++ = 1;

	return (ptr);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("objs memory alloc %p\n", ft_calloc(atoi(argv[1]), atoi(argv[2])));
		printf("calloc.c alloc'ed %p\n", calloc(atoi(argv[1]), atoi(argv[2])));
	}
	return (0);
}*/
