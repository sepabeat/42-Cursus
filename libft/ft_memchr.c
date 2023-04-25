/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:31:36 by salperez          #+#    #+#             */
/*   Updated: 2023/04/24 13:36:10 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	val;
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	val = (unsigned char)c;
	while (i < n)
	{
		if (*ptr == val)
			return ((void *)ptr);
		ptr++;
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char s[] = "hola k ase";
// 	int c = 'l';

// 	// printf("%s", memchr(s, c));
// 	printf("%s", ft_memchr(s, c, 4));

// 	return (0);
// }