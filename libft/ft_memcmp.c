/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:56:17 by salperez          #+#    #+#             */
/*   Updated: 2023/04/25 15:05:33 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && (*str1 + 1 != '\0' || *str2 + 1 != '\0'))
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		i++;
		str1++;
		str2++;
	}
	return (0);
}

// int main (void)
// {
// 	char str1[]= "hola";
// 	char str2[]= "holb";
// 	size_t	size = 4;
// 	// printf("%d", memcmp(str1, str2, size));
// 	printf("%d", ft_memcmp(str1, str2, size));
// 	return (0);
// }
