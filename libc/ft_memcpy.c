/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:19:11 by salperez          #+#    #+#             */
/*   Updated: 2023/04/24 13:22:50 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t	n)
{
	size_t			i;
	unsigned char	*dstu;
	unsigned char	*srcu;

	i = 0;
	dstu = (unsigned char *)dst;
	srcu = (unsigned char *)src;
	while (i < n)
	{
		dstu[i] = srcu[i];
		i++;
	}
	return (dst);
}

// int main(void)
// {
// 	char dst[] = "como";
// 	char src[] = "estas";
// 	size_t	n = 2;
// 	// printf("%s", memcpy(dst, src, n));
// 	printf("%s", ft_memcpy(dst, src, n));
// 	return (0);
// }