/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 21:15:33 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/05 21:49:12 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c1;
	const unsigned char	*c2;

	c1 = s1;
	c2 = s2;
	while (n > 0)
	{
		if (*c1 != *c2)
			return (*c1 - *c2);
		c1++;
		c2++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	//char arr[] = { 'a', 'b', 'c', '\0', 'd' };
	if (argc == 4)
	{
		printf("compared strings and the diff is %d\n", ft_memcmp(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);

}*/
