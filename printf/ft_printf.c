/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:58:21 by salperez          #+#    #+#             */
/*   Updated: 2023/05/08 18:25:27 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	ft_printf(char const *str, ...)
{
	int		i;
	va_list	argptr;

	va_start(argptr, i);
}


int	main(void)
{
	printf("check, check %d, hola\n", 25);
/* 	ft_printf("check, check %d, hola\n", 25);
 */
}
