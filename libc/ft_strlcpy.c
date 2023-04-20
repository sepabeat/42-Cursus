/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:36:13 by salperez          #+#    #+#             */
/*   Updated: 2023/04/20 14:14:38 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char	*dst, const char	*src, size_t	dstsize)
{
	
}

int main (void)
{
	char	dst[] = "hola";
	char	src[] = "caca";
	size_t	dstsize = 5;
	
	printf("%s\n", dst);
	printf("%s\n", src);
	// printf("%zu\n", ft_strlcpy(dst, src, dstsize));
	printf("%lu\n", strlcpy(dst, src, dstsize));
	// printf("%s\n", dst);
	printf("%s\n", src);
	return (0);;
}