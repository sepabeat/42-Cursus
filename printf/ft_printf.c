/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:58:21 by salperez          #+#    #+#             */
/*   Updated: 2023/05/10 16:56:25 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

void	ft_printformat(va_list args, char *str, size_t *i)
{
	if (*str == 'c')
		ft_putchari(va_arg(args, int), i);
	else if (*str == 's')
		ft_putstri(va_arg(args, char *), i);
	else if ((*str == 'd') || (*str == 'i'))
		ft_putnbri(va_arg(args, int), i);
	else if (*str == 'x')
		ft_puthexalli(va_arg(args, unsigned int), "0123456789abcdef", i);
	else if (*str == 'X')
		ft_puthexalli(va_arg(args, unsigned int), "0123456789ABCDEF", i);
	else if (*str == 'u')
		ft_putunsigi(va_arg(args, unsigned int), i);
	else if (*str == '%')
		ft_putchari(*str, i);
	else if (*str == 'p')
	{
		ft_putstri("0x", i);
		ft_putthexalli(va_arg(args, unsigned long int), "0123456789abcdef", i);
	}
}

int	ft_printf(char const *str, ...)
{
	size_t	i;
	va_list	args;

	va_start(args, str);
	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_printformat(args, (char *)str, &i);
		}
		else
			printf("%c", str[i]);
		i++;
	}
	va_end(args);
	return (i);
}

int	main(void)
{
	printf("check, check %d, hola\n", 25);
	/* 	ft_printf("check, check %d, hola\n", 25);
 */
}
