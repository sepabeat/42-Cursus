/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:58:21 by salperez          #+#    #+#             */
/*   Updated: 2023/05/08 19:19:18 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	size_t	i;
	va_list	argptr;

	va_start(argptr, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if ((str[i] == 'd') || (str[i] == 'i'))
				ft_putnbri(va_arg(argptr, int), i);
			else if (str[i] == 's')
				printf("%s", va_arg(argptr, char *));
			else if (str[i] == 'c')
				printf("%c", va_arg(argptr, int));
			else if (str[i] == 'x')
				printf("%x", va_arg(argptr, unsigned int));
			else if (str[i] == 'X')
				printf("%X", va_arg(argptr, unsigned int));
			else if (str[i] == 'p')
				printf("%p", va_arg(argptr, void *));
			else if (str[i] == 'u')
				printf("%u", va_arg(argptr, unsigned int));
			else if (str[i] == '%')
				printf("%%");
		}
		else
			printf("%c", str[i]);
		i++;
	}
	va_end(argptr);
	return (i);
}

int	main(void)
{
	printf("check, check %d, hola\n", 25);
	/* 	ft_printf("check, check %d, hola\n", 25);
 */
}
