/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 10:02:06 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/08 14:49:08 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	len;

	if (s == NULL)
		return (0);
	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

void	ft_putstr_fd(char *s, int fd)
{
	size_t	buffersize;

	if (s == NULL)
		return;

	buffersize = ft_strlen(s);
	write(fd, s, buffersize);
}
/*
#include <stdio.h>

int main(void)
{
	char s[] = "abcd";

	ft_putstr_fd(s, 1);
	ft_putstr_fd("\n", 1);
	return (0);
}*/
