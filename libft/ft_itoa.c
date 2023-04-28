/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:31:10 by salperez          #+#    #+#             */
/*   Updated: 2023/04/28 15:06:28 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
// con esta función vamos a obtener la longitud del int que nos ha llegado

char	*ft_itoa(int n)
{
	char		*str;
	long int	num;
	int			len;

	num = n;
	len = ft_num_len(num);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	if (num == 0)
		str[0] = '0';
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		len--;
		str[len] = num % 10 + 48;
		num = num / 10;
	}
	return (str);
	free (str);
}

// int main (void)
// {
// 	int	num = 4567;
// 	printf("%s\n", ft_itoa(num));
// 	printf("%d", ft_num_len(num));
// 	return (0);
// }

/* Esta función recibe un entero (neg o pos) y lo devuelve representado
en una cadena char */