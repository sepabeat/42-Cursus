/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:45:39 by salperez          #+#    #+#             */
/*   Updated: 2023/04/24 13:35:24 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}

int	main(void)
{
	const char s[] = "hola k ase";
	int c = 'k';

	// printf("%s", strchr(s, c));
	printf("%s", ft_strchr(s, c));
	return (0);
}