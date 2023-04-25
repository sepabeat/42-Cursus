/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:30:17 by salperez          #+#    #+#             */
/*   Updated: 2023/04/24 14:09:05 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned char	*str;
	unsigned char	*tofind;
	size_t			x;
	size_t			i;
	size_t			j;

	str = (unsigned char *)haystack;
	tofind = (unsigned char *)needle;
	x = 0;
	i = 0;
	if (tofind[i] == '\0')
		return ((char *)&haystack[i]);
	while (x < len)
	{
		while (str[i] != '\0')
		{
			j = 0;
			while (str[i] == tofind[j] && tofind[j] != '\0')
			{
				if (tofind[j] == '\0')
				{
					return ((char *)&haystack[i]);
				}
				j++;
			}
			i++;
		}
		x++;
	}
	return (0);
}

// int	main(void)
// {
// 	char *str = "hola pep hola pepsicola";
// 	char *tofind = "pepsi";
// 	size_t len = 21;

// 	printf("%s", strnstr(str, tofind, len));
// }