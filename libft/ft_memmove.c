/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:48:57 by salperez          #+#    #+#             */
/*   Updated: 2023/05/04 12:38:25 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst && !src)
		return (0);
	if (dst < src)
	{
		i = 0;
		while (i < (int)len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}	
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}	
	}
	return (dst);
}

// int	main(void)
// {
// 	char source[] = "puta";
// 	char dst[] = "tabaco";
// 	char dest1[] = "tabaco";
// 	printf("%s\n", memmove(dst, source, 3));
// 	printf("%s", ft_memmove(dest1, source, 3));
// 	return (0);
// }
