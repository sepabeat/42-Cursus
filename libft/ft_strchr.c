/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:45:39 by salperez          #+#    #+#             */
/*   Updated: 2023/05/25 12:58:06 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)&s[i]);
}

// int	main(void)
// {
// 	const char s[] = "hola k ase";
// 	int c = 'k';

// 	// printf("%s", strchr(s, c));
// 	printf("%s", ft_strchr(s, c));
// 	return (0);
// }

/* funcion que continúa un string a partir
 de la primera coincidencia introducida en int*/