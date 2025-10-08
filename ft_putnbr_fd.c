/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:07:54 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/08 14:59:12 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

static size_t	ft_numlen(int n)
{
	size_t	len;

	len =  0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*ft_itoa(int n)
{
	char	*str;
	int	len;
	long	nb;

	nb = n;
	len = ft_numlen(nb);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		len--;
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}

void	ft_putnbr_fd(int n, int fd)
{
	size_t	buffersize;
	char	*s;
	
	s = ft_itoa(n);
	if (!s)
		return;
	buffersize = ft_numlen(n);
	write(fd, s, buffersize);
	free(s);
}
/*
#include <stdio.h>

int main(int argc, char *argv [])
{
	if (argc > 0)
		ft_putnbr_fd(atoi(argv[1]), 1);
	return (0);
}*/
