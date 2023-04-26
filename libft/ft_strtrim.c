/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:30:37 by salperez          #+#    #+#             */
/*   Updated: 2023/04/26 15:40:06 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_check_start(char const	*s1, char const	*set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] != '\0')
	{
	j = 0;
		while (s1[i] != set[j])
		{
			if (set[j] == '\0')
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_check_end(char const	*s1, char const	*set)
{
	size_t	len;
	size_t	j;

	len = ft_strlen(s1) - 1;
	while (len > 0)
	{
	j = 0;
		while (s1[len] != set[j])
		{
			if (set[j] == '\0')
				return (len);
			j++;
		}
		len--;
	}
	return (ft_strlen(s1) - 1);
}


/* char	*ft_strtrim(char const	*s1, char const	*set)
{
	char			*str;
	size_t			i;
	size_t			j;
	size_t			x;

	i = 0;
	j = 0;
	x = 0;
	str = (char *)malloc((ft_strlen(s1) - ft_strlen(set) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	
	str[i] = '\0';
	return (str);
	free(str);
} */

int main (void)
{
	char s1[] = "hola k ase";
	char set[] = "oh";
	// printf("%s", ft_strtrim(s1, set));
	printf("%d\n", ft_check_start(s1, set));
	printf("%d", ft_check_end(s1, set));
}
