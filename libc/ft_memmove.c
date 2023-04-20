/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:48:57 by salperez          #+#    #+#             */
/*   Updated: 2023/04/19 16:35:16 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	size_t			i;
	unsigned char	*dstu;
	unsigned char	*srcu;

	i = 0;
	dstu = (unsigned char *)dst;
	srcu = (unsigned char *)src;
	if (dstu > srcu)
	{
		while (i < len)
		{
			dstu[i] = srcu[i];
			i++;
		}
	}
	else if (dstu < srcu)
	{
		while (len >= 0)
		{
			dstu[len - 1] = srcu[len - 1];
			len--;
		}
	}
	return (dst);
}

// int	main(void)
// {
// 	char source[] = "hola";
// 	char dest[] = "cacatusmuertos";
// 	char dest1[] = "cacatusmuertos";
// 	printf("%s\n", memmove(dest, source, 4));
// 	printf("%s", ft_memmove(dest1, source, 4));
// 	return (0);
// }
