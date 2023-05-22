/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:16:29 by salperez          #+#    #+#             */
/*   Updated: 2023/05/22 13:32:12 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>
#include "ft_printf.h"

void	ft_putcharint(int c, size_t *i)
{
	write(1, &c, 1);
	(*i)++;
}

void	ft_putstrint(char *str, size_t *i)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putcharint(*str, i);
		str++;
	}
}

void	ft_putnbrint(int n, size_t *i)
{
	if (n == -2147483648)
	{
		ft_putstrint("-2147483648", i);
		return ;
	}
	if (n < 0)
	{
		ft_putcharint('-', i);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbrint(n / 10, i);
		ft_putcharint(n % 10 + '0', i);
	}
	else
		ft_putcharint(n + '0', i);
}

void	ft_puthexallint(unsigned long int n, char *hexa, size_t *i)
{
	char	c;

	if (n < 16)
	{
		c = hexa[n];
		ft_putcharint(c, i);
	}
	if (n >= 16)
	{
		c = hexa[n % 16];
		n = n / 16;
		ft_puthexallint(n, hexa, i);
		ft_putcharint(c, i);
	}
}

void	ft_putunsigint(unsigned int n, size_t *i)
{
	if (n < 0)
		n *= -1;
	if (n >= 10)
	{
		ft_putunsigint(n / 10, i);
		ft_putcharint(n % 10 + '0', i);
	}
	else
		ft_putcharint(n + '0', i);
}

//int	main(void)
//{
// size_t i = 0;
// char letra = 'z';
//int j = 2456;
//int x = 't';
//char *str = "hola k ase";
// char *str2 = NULL;

//ft_putchari(x, &i);
//ft_putstri(str2, &i);
//ft_putnbri(j, &i);
//ft_puthexalli(j, "0123456789abcdef", &i);
//printf("check, check %d, hola\n", 25);
/* 	ft_printf("check, check %d, hola\n", 25);
 */
//}