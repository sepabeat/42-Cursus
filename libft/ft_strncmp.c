/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:29:57 by salperez          #+#    #+#             */
/*   Updated: 2023/05/04 12:42:14 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	n = 5;
// 	char str1[] = "cococulo";
// 	char str2[] = "cococola";
// 	printf("%d", ft_strncmp(str1, str2, n));
// 	return (0);
// }

// Función que resta el valor de la primera diferencia
// encontrada hasta n y devuelve la resta en valor ASCII