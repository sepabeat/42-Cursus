/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:12:20 by salperez          #+#    #+#             */
/*   Updated: 2023/04/19 13:45:27 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*s;

	s = b;
	i = 0;
	while (i < len)
	{
		*s = c;
		i++;
		s++;
	}
	return (b);
}

// int	main(void)
// {
// 	char s[] = "hola";
// 	int c = 38;
// 	size_t n = 2;
// 	// printf("%s", memset(s, c, n));
// 	printf("%s", ft_memset(s, c, n));
// 	return (0);
// }
