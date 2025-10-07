/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 22:17:42 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/07 10:35:10 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;
	size_t	len1;
	size_t	len2;
	char	*ptr;

	if (!s1 && !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	joint = malloc(len1 + len2 + 1);
	if (!joint)
		return (NULL);
	ptr = joint;
	if (s1)
		while (*s1)
			*ptr++ = *s1++;
	if (s2)
		while(*s2)
			*ptr++ = *s2++;
	*ptr = '\0';
	return (joint);
}

/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc > 0 )
	{
		printf("objs memory alloc %s\n", ft_strjoin(argv[1], argv[2]));
	}
	return (0);
}*/
