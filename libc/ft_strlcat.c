/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:40:27 by salperez          #+#    #+#             */
/*   Updated: 2023/04/25 10:35:20 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (len_src + size);
	i = len_dst;
	while (*src != '\0' && i < (size - 1))
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (len_dst + len_src);
}

// int main (void)
// {
// 	char	dst[] = "hola";
// 	char	src[] = "cabesa";
// 	size_t	dstsize = 6; //esto es el tamaño del string final

// 	printf("%s\n", dst);
// 	printf("%s\n", src);
// 	printf("%zu\n", ft_strlcat(dst, src, dstsize));
// 	printf("%s\n", dst);
// 	printf("%s\n", src);
// 	return (0);
// }
