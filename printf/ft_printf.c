/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:58:21 by salperez          #+#    #+#             */
/*   Updated: 2023/05/22 13:27:20 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdarg.h>
//#include <stdio.h>
#include "ft_printf.h"

void	ft_printfunctions(va_list args, char *str, size_t *i)
{
	if (*str == 'c')
		ft_putcharint(va_arg(args, int), i);
	else if (*str == 's')
		ft_putstrint(va_arg(args, char *), i);
	else if ((*str == 'd') || (*str == 'i'))
		ft_putnbrint(va_arg(args, int), i);
	else if (*str == 'x')
		ft_puthexallint(va_arg(args, unsigned int), "0123456789abcdef", i);
	else if (*str == 'X')
		ft_puthexallint(va_arg(args, unsigned int), "0123456789ABCDEF", i);
	else if (*str == 'u')
		ft_putunsigint(va_arg(args, unsigned int), i);
	else if (*str == '%')
		ft_putcharint(*str, i);
	else if (*str == 'p')
	{
		ft_putstrint("0x", i);
		ft_puthexallint(va_arg(args, unsigned long int), "0123456789abcdef", i);
	}
}

int	ft_printf(char const *str, ...)
{
	size_t	i;
	va_list	args;

	va_start(args, str);
	i = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_printfunctions(args, (char *)str, &i);
		}
		else
			ft_putcharint(*str, &i);
		str++;
	}
	va_end(args);
	return (i);
}

// int	main(void)
// {
// 	printf("check, check %d, hola\n", 25);
// 	/* 	ft_printf("check, check %d, hola\n", 25);
//  */
// }
