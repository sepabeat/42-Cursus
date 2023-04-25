/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:08:55 by salperez          #+#    #+#             */
/*   Updated: 2023/04/24 14:09:10 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	posicion;

	i = 0;
	posicion = ft_strlen(s);
	s = s + posicion;
	while (s)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (0);
}

// int	main (void)
// {
// 	const char s[] = "hola k ase";
// 	int c = 'a';

// 	// printf("%s", strrchr(s, c));
// 	printf("%s", ft_strrchr(s, c));
// 	return (0);
// }
