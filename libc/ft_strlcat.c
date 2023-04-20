/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:40:27 by salperez          #+#    #+#             */
/*   Updated: 2023/04/20 15:57:30 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
// {

	
// }

int main (void)
{
	char	dst[] = "hola";
	char	src[] = "cabesa";
	size_t	dstsize = 4;

	printf("%s\n", dst);
	printf("%s\n", src);
	// printf("%d\n", ft_strlcat(dst, src, dstsize));
	printf("%lu\n", strlcat(dst, src, 4));
	printf("%s\n", dst);
	printf("%s\n", src);
	return (0);
}