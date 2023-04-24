/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:40:27 by salperez          #+#    #+#             */
/*   Updated: 2023/04/24 18:22:52 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	unsigned int	i;
// 	unsigned int	x;
// 	unsigned int	dstlen;

// 	dstlen = ft_strlen(dst);
// 	i = dstlen;
// 	x = 0;
// 	if (dstsize > 0)
// 	{
// 		while (src[x] != '\0')
// 		{
// 			while (i < dstsize - 1)
// 			{
// 				dst[i] = src[x];
// 				x++;
// 				i++;
// 			}
// 			break ;
// 		}
// 		if (dst[i] != '\0')
// 			dst[i] = '\0';
// 	}
// 	if (dstsize < ft_strlen(dst))
// 		return (dstsize + ft_strlen(src));
// 	return (dstlen + ft_strlen(src));
// }

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	cont;

	len_dst = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (len_src + size);
	cont = len_dst;
	while (*src != '\0' && cont < (size - 1))
	{
		*(dest + cont) = *src;
		cont++;
		src++;
	}	
	*(dest + cont) = '\0';
	return (len_dst + len_src);
}

// int main (void)
// {
// 	char	dst[] = "hola";
// 	char	src[] = "cabesa";
// 	size_t	dstsize = 6;

// 	printf("%s\n", dst);
// 	printf("%s\n", src);
// 	printf("%zu\n", ft_strlcat(dst, src, dstsize));
// 	printf("%zu\n", strlcat(dst, src, 4));
// 	printf("%s\n", dst);
// 	printf("%s\n", src);
// 	return (0);
// }
