/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:19:11 by salperez          #+#    #+#             */
/*   Updated: 2023/04/28 17:23:53 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
	free (str);
}

// int main (void)
// {
// 	char (*f)(unsigned int, char);
// 	f = ft_toupper;
// 	// Esta es la sintaxis de igualar f desde el main con una función
// 	// existente
// }
/* strmapi se utiliza para crear una especie de función vacía
que nos permite llamar a otras funciones, es como una función comodín
*/
