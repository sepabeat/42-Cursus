/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:15:24 by salperez          #+#    #+#             */
/*   Updated: 2023/05/04 12:42:43 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

// void	ft_bzero(void *s, size_t n)
// {
// 	unsigned int	i;
// 	unsigned char	*f;

// 	f = s;
// 	i = 0;
// 	while (i < n)
// 	{
// 		*f = '\0';
// 		i++;
// 		f++;
// 	}
// }

// void	*ft_calloc(size_t count, size_t size)
// {
// 	int	*ptr;

// 	ptr = malloc(count * size);
// 	if (!ptr)
// 		return (0);
// 	ft_bzero(ptr, count * size);
// 	return (ptr);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	if (start > ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	sub = (char *)ft_calloc(sizeof(*s), (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
	free(sub);
}

// int	main(void)
// {
// 	printf("%s", ft_substr("hola", 1, 1));
// 	return (0);
// }