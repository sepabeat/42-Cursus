/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:36:13 by salperez          #+#    #+#             */
/*   Updated: 2023/04/20 14:50:34 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < dstsize -1)
	{
		dst[i] = src [i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

int main (void)
{
	char	dst[] = "chupachups";
	char	src[] = "upas";
	size_t	dstsize = 4;
	
	printf("%s\n", dst);
	printf("%s\n", src);
	printf("%zu\n", ft_strlcpy(dst, src, dstsize));
	printf("%lu\n", strlcpy(dst, src, dstsize));
	printf("%s\n", dst);
	printf("%s\n", src);
	return (0);;
}