/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:40:27 by salperez          #+#    #+#             */
/*   Updated: 2023/04/24 15:30:17 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < dstsize)
	{
		i++;
	}
	while (src[j] != '\0')
	{
		while (j < dstsize)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		j++;
	}
	if (dst[i] != '\0')
		dst[i] = '\0';
	return (ft_strlen(dst));
}

int	main(void)
{
	char dst[] = "hola";
	char src[] = "cabesa";
	size_t dstsize = 6;

	printf("%s\n", dst);
	printf("%s\n", src);
	printf("%zu\n", ft_strlcat(dst, src, dstsize));
	printf("%zu\n", strlcat(dst, src, dstsize));
	printf("%s\n", dst);
	printf("%s\n", src);
	return (0);
}