/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:24:15 by salperez          #+#    #+#             */
/*   Updated: 2023/05/22 13:28:42 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
void	ft_printfunctions(va_list args, char *str, size_t *i);
void	ft_putcharint(int c, size_t *i);
void	ft_putstrint(char *str, size_t *i);
void	ft_putnbrint(int n, size_t *i);
void	ft_puthexallint(unsigned long int n, char *hexa, size_t *i);
void	ft_putunsigint(unsigned int n, size_t *i);

#endif
