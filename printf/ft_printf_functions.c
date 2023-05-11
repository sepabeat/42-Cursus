/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:16:29 by salperez          #+#    #+#             */
/*   Updated: 2023/05/10 16:56:47 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

void	ft_putchari(int c, size_t *i)
{
	write(1, &c, 1);
	(*i)++;
}

size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_putstri(char *str, size_t *i)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putchari(*str, i);
		str++;
	}
}

void ft_putnbri(int n, size_t *i)
{
	if (n == -2147483648)
	{
		ft_putstri("-2147483648", i);
		return ;
	}
	if ( n < 0)
	{
		ft_putchari('-', i);
		n *= -1; 
	}
	if (n >= 10)
	{
		ft_putnbri(n / 10, i);
		ft_putchari(n % 10 + '0', i);
	}
	else 
		ft_putchari(n + '0', i);
}

int	main(void)
{
    size_t i = 0;
    char letra = 'z';
	int j = 2456;
	int x = 't';
    char *str = "hola k ase";
    char *str2 = NULL;

    //ft_putchari(x, &i);
    //ft_putstri(str2, &i);
	ft_putnbri(j, &i);
	//printf("check, check %d, hola\n", 25);
	/* 	ft_printf("check, check %d, hola\n", 25);
 */
}