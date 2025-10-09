/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 09:13:05 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/09 12:25:06 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
#include <ctype.h>

void add_index(unsigned int i, char *c)
{
		*c = *c + i;  // shifts char by its index
}

int main(void)
{
	char s[] = "abcd";

		printf("Original: %s\n", s);
		ft_striteri(s, add_index);
		printf("Modified: %s\n", s);
	
	return (0);
}*/
