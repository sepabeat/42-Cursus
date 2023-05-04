/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:33:00 by salperez          #+#    #+#             */
/*   Updated: 2023/05/04 12:41:09 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_count_word(char *s, char c)
{
	unsigned int	i;
	int				recuento;
	int				reset;

	i = 0;
	recuento = 0;
	reset = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && reset == 0)
		{
			recuento++;
			reset = 1;
		}
		if (s[i] == c)
			reset = 0;
		i++;
	}
	return (recuento);
}

char	*ft_save_word(const char *s, unsigned int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char	**ft_split(char *s, char c)
{
	char	**str;
	int		x;
	int		y;
	int		z;

	z = 0;
	x = 0;
	str = (char **)malloc(sizeof(char *) * ((ft_count_word(s, c)) + 1));
	if (!str || !s)
		return (NULL);
	while (s[x])
	{
		while (s[x] == c)
			x++;
		y = x;
		while (s[x] && s[x] != c)
			x++;
		if (x > y)
		{
			str[z] = ft_save_word(s + y, x - y);
			z++;
		}
	}
	str[z] = NULL;
	return (str);
}

// int	main(void)
// {
// 	char s1[] = "    hola  de  ke ase  ";
// 	char del = ' ';
// 	printf("%s\n", *ft_split(s1, del));
// 	printf("%s\n", ft_split(s1, del)[1]);
// 	printf("%s\n", ft_split(s1, del)[2]);
// 	printf("%s\n", ft_split(s1, del)[3]);
// 	printf("%s\n", ft_split(s1, del)[4]);
// 	return (0);
// }

/*Split es una función que se utiliza para DIVIDIR
 el contenido de un string en este caso, en substrings, se utiliza como
 separador el valor introducido en el caracter.
 La función original separa archivos o strings de hasta 1000 caracteres*/