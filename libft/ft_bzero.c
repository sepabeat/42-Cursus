/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:58:13 by salperez          #+#    #+#             */
/*   Updated: 2023/05/04 12:38:44 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*f;

	f = s;
	i = 0;
	while (i < n)
	{
		*f = '\0';
		i++;
		f++;
	}
}

// int	main(void)
// {
// 	char s[] = "hola";
// 	size_t n = 0;
// 	printf("%s", bzero(s, n));
// 	// printf("%s", ft_bzero(s, n));
// 	return (0);
// }

// sustituir las posiciones escogidas de un string por el valor NULL